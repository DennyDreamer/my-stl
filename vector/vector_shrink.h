#pragma once
#include "vector.h"
template<class T>
void Vector<T>::shrink()
{
    int temp=_capacity>>2;
    
    if(_size>=temp) 
    {
        std::cout<<"size="<<_size<<"  capacity="<<_capacity<<std::endl;
        return;
    }
    temp=temp<<1;
    _capacity= temp>DEFAULT_CAPACITY?temp:DEFAULT_CAPACITY;
    T * oldelem=V; V=new T[_capacity];
    for (int i=0;i<_size;i++) V[i]=oldelem[i];
    delete [] oldelem;
}
