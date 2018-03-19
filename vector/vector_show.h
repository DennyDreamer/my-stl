#pragma once
#include<iostream>
#include"vector_defination.h"
template<class T>
void Vector<T> :: show()
{
    std::cout<<"element:";
    for (int i=0;i<_size-1;i++)
    {
        std::cout<<V[i]<<',';
    }
    std::cout<<V[_size-1];
    std::cout<<std::endl;
    std::cout <<"size="<<_size<<std::endl;
    std::cout<<"capacity="<<_capacity<<std::endl;
}

