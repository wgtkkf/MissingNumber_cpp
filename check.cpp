#include "check.h"
#include <iostream>
using namespace std;

// constructor
ccheck::ccheck()
{
    cout << "ccheck object generation:\n" << endl;
}

// destructor
ccheck::~ccheck()
{
    cout << "ccheck object destruction:" << endl;
}

// check
void ccheck::CheckFunction(int *num) // *num is table
{
    Icheck = 9; // after sorting, last element

    if (Icheck == (size-1)){
        cout << "You are missing: " << Icheck+1 << endl;
    }else{
        //counter = 0
        Icheck = *num;
        while (counter < size){
            if (Icheck == *num){
                Icheck += 1;
                counter += 1;
                num++;
            }else if (Icheck != *num){
                cout << "Missing number is: " << counter << endl;
                break;
            }
        }
    }
}