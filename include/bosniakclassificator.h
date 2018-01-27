#ifndef BOSNIAKCLASSIFICATOR_H
#define BOSNIAKCLASSIFICATOR_H

namespace Bosniak {

    struct BosniakAnswer;
    struct BosniakParam;

    class BosniakClassificator
    {
    public:
        BosniakAnswer answer(const BosniakParam& param);
    };

}




#endif // BOSNIAKCLASSIFICATOR_H
