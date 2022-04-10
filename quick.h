#ifndef _QUICK_H_
#define _QUICK_H_

class cquick{
    public:
        cquick(); // construcotr
        virtual ~cquick(); // destructor
        
        void show(int *num);
        void swap(int *x, int *y);
        int partition(int *num, int left, int right);
        void qsort(int *num, int left, int right);
        //
        void CheckFunction(int *num);
    public:
        //
        int size = 9; // table size
        //
        int counter = 0;
        int Icheck;
};

#endif