#ifndef BOSNIAKPARAMITEMS_H
#define BOSNIAKPARAMITEMS_H

namespace Bosniak
{

    enum class WallThick
    {
        NULL_VALUE,
        THIN,
        EVEN_THICK,
        UNEVEN_THICK
    };

    enum class Septum
    {
        NULL_VALUE,
        NO,
        THIN_UNI,
        THIN_MULT,
        THICK
    };

    enum class Contrast
    {
        NULL_VALUE,
        NO,
        YES
    };

    enum class Calcium
    {
        NULL_VALUE,
        NO,
        FINE,
        KNOBBY,
        MASSIVE
    };

    enum class Tissue
    {
        NULL_VALUE,
        NO,
        YES
    };

    enum class Content
    {
        NULL_VALUE,
        HOMO,
        HETERO
    };

    enum class Contour
    {
        NULL_VALUE,
        SMOOTH,
        ROUGH
    };

    enum class Size
    {
        NULL_VALUE,
        SMALL, //Less than 3 cm
        BIG
    };
}

#endif // BOSNIAKPARAMITEMS_H
