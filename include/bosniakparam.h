#ifndef BOSNIAKPARAM_H
#define BOSNIAKPARAM_H

#include "bosniakparamitems.h"
#include <QList>

namespace Bosniak {

    struct BosniakParam
    {
        BosinakParam() :
            wallThick   (WallThick::NULL_VALUE),
            septum      (Septum::NULL_VALUE),
            contrast    (Contrast::NULL_VALUE),
            calcium     (Calcium::NULL_VALUE),
            tissue      (Tissue::NULL_VALUE),
            content     (Content::NULL_VALUE),
            contour     (Contour::NULL_VALUE),
            size        (Size::NULL_VALUE)
        {}

        const static quint8 numParam = 8;

        WallThick   wallThick;
        Septum      septum;
        Contrast    contrast;
        Calcium     calcium;
        Tissue      tissue;
        Content     content;
        Contour     contour;
        Size        size;
    };

    struct BosniakPureParam
    {
        QList<WallThick>    wallThick;
        QList<Septum>       septum;
        QList<Contrast>     contrast;
        QList<Calcium>      calcium;
        QList<Tissue>       tissue;
        QList<Content>      content;
        QList<Contour>      contour;
        QList< Size>        size;
    };
}

#endif // BOSNIAKPARAM_H
