#ifndef BOSNIAKANSWER_H
#define BOSNIAKANSWER_H

#include <QString>

namespace Bosniak
{

    enum class Degree
    {
        NULL_VALUE,
        FIRST,
        SECOND,
        SECOND_FOLLOW,
        THIRD,
        FOURTH
    };

    struct BosniakAnswer
    {
        BosniakAnswer() :
        degree(NULL_VALUE)
        {}

        Degree degree;
        QString name;
        double probability;
        QString description;
    };
}

#endif // BOSNIAKANSWER_H
