#ifndef BOSNIAKCLASSIFICATOR_H
#define BOSNIAKCLASSIFICATOR_H

#include <QMap>

namespace Bosniak {

    struct BosniakAnswer;
    struct BosniakParam;
    struct BosniakPureParam;
    enum class Degree;

    class BosniakClassificator
    {
    public:
        BosniakClassificator();
        BosniakAnswer answer(const BosniakParam& param);

    private:
        void initDegrees();

        QMap<Degree, BosniakPureParam> _degrees;

    };

}

#endif // BOSNIAKCLASSIFICATOR_H
