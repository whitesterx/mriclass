#include "bosniakclassificator.h"
#include "bosniakanswer.h"
#include "bosniakparam.h"

using namespace Bosniak;

BosniakClassificator::BosniakClassificator()
{
    initDegrees();
}

void BosniakClassificator::initDegrees()
{
    // First degree
    {
        BosniakPureParam temp;
        temp.wallThick.append   (WallThick::THIN);
        temp.septum.append      (Septum::NO);
        temp.contrast.append    (Contrast::NO);
        temp.calcium.append     (Calcium::NO);
        temp.tissue.append      (Tissue::NO);
        temp.content.append     (Content::HOMO);
        temp.contour.append     (Contour::SMOOTH);
        temp.size.append        (Size::SMALL);

        _degrees.insert(Degree::FIRST, temp);
    }
    // Second degree
    {
        BosniakPureParam temp;
        temp.wallThick.append   (WallThick::THIN);
        temp.septum.append      (Septum::THIN_UNI);
        temp.contrast.append    (Contrast::NO);
        temp.calcium.append     (Calcium::SMALL);
        temp.tissue.append      (Tissue::NO);
        temp.content.append     (Content::HOMO);
        temp.contour.append     (Contour::SMOOTH);
        temp.size.append        (Size::SMALL);

        _degrees.insert(Degree::SECOND, temp);
    }
    // Second follow
    {
        BosniakPureParam temp;
        temp.wallThick.append(WallThick::EVEN_THICK);
        temp.septum.append(Septum::THIN_MULT);
        temp.contrast.append(Contrast::NO);
        temp.calcium.append(Calcium::KNOBBY);
        temp.tissue.append(Tissue::NO);
        temp.content.append(Content::HOMO);
        temp.contour.append(Contour::SMOOTH);
        temp.size.append(Size::BIG);

        _degrees.insert(Degree::SECOND_FOLLOW, temp);
    }

    // Third
    {
        BosniakPureParam temp;
        temp.wallThick.append(WallThick::EVEN_THICK);
        temp.wallThick.append(WallThick::UNEVEN_THICK);
        temp.septum.append(Septum::THICK);
        temp.contrast.append(Contrast::YES);
        temp.calcium.append(Calcium::KNOBBY);
        temp.calcium.append(Calcium::MASSIVE);
        temp.tissue.append(Tissue::NO);
        temp.content.append(Content::HETERO);
        temp.contour.append(Contour::ROUGH);
        temp.size.append(Size::SMALL);
        temp.size.append(Size::BIG);

        _degrees.insert(Degree::THIRD, temp);
    }
    // Fourth
    {
        BosniakPureParam temp;
        temp.wallThick.append(WallThick::EVEN_THICK);
        temp.wallThick.append(WallThick::UNEVEN_THICK);
        temp.septum.append(Septum::THICK);
        temp.contrast.append(Contrast::YES);
        temp.calcium.append(Calcium::KNOBBY);
        temp.calcium.append(Calcium::MASSIVE);
        temp.tissue.append(Tissue::YES);
        temp.content.append(Content::HETERO);
        temp.contour.append(Contour::ROUGH);
        temp.size.append(Size::SMALL);
        temp.size.append(Size::BIG);

        _degrees.insert(Degree::FOURTH, temp);
    }

}

BosniakAnswer BosniakClassificator::answer(const BosniakParam& param)
{
    BosniakAnswer answer;
    answer.degree = Degree::FIRST;
    answer.probability = 0;

    for(auto i = _degrees.begin(); i != _degrees.end(); ++i)
    {
        quint32 coin = 0;
        for(auto j = i->wallThick.begin(); j != i->wallThick.end(); ++j)
        {
            if(param.wallThick == *j)
            {
                ++coin;
                break;
            }
        }

        for(auto j = i->septum.begin(); j != i->septum.end(); ++j)
        {
            if(param.septum == *j)
            {
                ++coin;
                break;
            }
        }

        for(auto j = i->contrast.begin(); j != i->contrast.end(); ++j)
        {
            if(param.contrast == *j)
            {
                ++coin;
                break;
            }
        }

        for(auto j = i->calcium.begin(); j != i->calcium.end(); ++j)
        {
            if(param.calcium == *j)
            {
                ++coin;
                break;
            }
        }

        for(auto j = i->tissue.begin(); j != i->tissue.end(); ++j)
        {
            if(param.tissue == *j)
            {
                ++coin;
                break;
            }
        }

        for(auto j = i->content.begin(); j != i->content.end(); ++j)
        {
            if(param.content == *j)
            {
                ++coin;
                break;
            }
        }

        for(auto j = i->contour.begin(); j != i->contour.end(); ++j)
        {
            if(param.contour == *j)
            {
                ++coin;
                break;
            }
        }

        for(auto j = i->size.begin(); j != i->size.end(); ++j)
        {
            if(param.size == *j)
            {
                ++coin;
                break;
            }
        }

        double prob = static_cast<double>(coin) / param.numParam;
        if(prob > answer.probability)
        {
            answer.probability = prob;
            answer.degree = i.key();
        }
    }

    return answer;
}
