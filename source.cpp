// execution command: g++ source.cpp quick.cpp -o source

#include "quick.h"
#include <iostream>
using namespace std;

int main(void){
    cquick obj; // object generation
    int table[obj.size] = {9,6,4,2,3,5,7,0,1};
    obj.show(&table[0]); // before sorting
    obj.qsort(&table[0], 0, obj.size-1); // sorting
    obj.show(&table[0]); // after sorting
    obj.CheckFunction(&table[0]);

    return 0;
}