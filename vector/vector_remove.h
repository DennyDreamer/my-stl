#pragma once
#include"vector_defination.h"
template<class T>
void Vector<T>::remove(int Rank)
{
    if(Rank>_size) std::cout<<"ERROR"<<std::endl;
    else
    {
        for(int i=Rank+1;i<_size;i++) V[i-1]=V[i];
        _size--;
        shrink();
    }
}
