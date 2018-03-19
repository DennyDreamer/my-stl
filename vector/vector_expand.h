#pragma once
#include"vector.h"

template<class T>
void Vector<T>::expand()
{
    if(_capacity>_size) return;
    if(_capacity<DEFAULT_CAPACITY) _capacity=DEFAULT_CAPACITY;
    else    _capacity=_capacity<<1;
    T* oldelem=V;
    V=new T[_capacity];
    for(int i=0;i<_size;i++)   V[i]=oldelem[i];
    delete[] oldelem;

}
