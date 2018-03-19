#pragma once
#include "vector_defination.h"
template<class T>
void Vector<T>::copyFrom(T const *A,int low,int high)
{
      V_init(high-low,2*(high-low));
        for(int i=0;i<_size;i++)
        {
            V[i]=A[low+i];
        }
}
