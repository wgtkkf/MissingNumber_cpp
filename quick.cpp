#include "quick.h"
#include <iostream>
using namespace std;


// constructor
cquick::cquick()
{
    cout << "object generation:\n" << endl;
}

// destructor
cquick::~cquick()
{
    cout << "object destruction:" << endl;
}

// display
void cquick::show(int *num)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(i<size-1)
        {
            printf("%d ", *num);
            num++;
        }else if(i==size-1)
        {
            printf("%d\n\n", *num);
        }
    }
}

// swap
void cquick::swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// partition
int cquick::partition(int *num, int left, int right)
{
    int i, j, pivot;
    i=left;
    j=right+1;

    pivot = left;

    do{
        do{i++;} while(num[i] < num[pivot]);
        do{j--;} while(num[pivot] < num[j]);

        if(i<j){
            swap(&num[i], &num[j]);
            }
    } while (i < j);

    swap(&num[pivot], &num[j]);

    return j;
}

// quick
void cquick::qsort(int *num, int left, int right)
{
    int pivot;

    if(left >=right){
        return;
    }
    
    if(left < right)
    {
        pivot = partition(num, left, right);
        qsort(num, left, pivot-1);
        qsort(num, pivot+1, right);
    }
    //show(num);
}

// check
void cquick::CheckFunction(int *num) // *num is table after sorting
{
    Icheck = num[size-1]; // after sorting, last element

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