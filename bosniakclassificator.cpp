#include "bosniakclassificator.h"
#include "bosniakanswer.h"
#include "bosniakparam.h"

using namespace Bosniak;

BosniakClassificator::BosniakClassificator()
{
    initDegrees();
}

BosniakClassificator::initDegrees()
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

        _degrees.insert(Degree::THIRD, temp);
    }

}

BosniakAnswer BosniakClassificator::answer(const BosniakParam& param)
{

}
