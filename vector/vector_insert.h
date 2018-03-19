#pragma once
#include"vector_defination.h"
template<class T>

void Vector<T>::insert(int Rank,T const &elem)
{
    expand();
    for(int i=_size;i>Rank;i--)
    {
        V[i]=V[i-1];
    }
    _size++;
    V[Rank]=elem;
}
