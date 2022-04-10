#ifndef _CHECK_H_
#define _CHECK_H_
#include "quick.h"

class ccheck : public cquick{
    public:
        ccheck(); // construcotr
        virtual ~ccheck(); // destructor
        
        //
        void CheckFunction(int *num);
    private:
        int counter = 0;
        int Icheck;
};

#endif