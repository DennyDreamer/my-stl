#pragma once
#include "vector_defination.h"
template<class T>
void Swap(T *a,T *b)
{
    T temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
template<class T>
void Vector<T> ::quick_sort(int start,int end)
{
    if(end-start>=2)
    {
        int  mid= (start+end)/2,i=start,j=end+1;
    //********************8*******三数取中*********************************
        if(V[start]>V[mid])
        {
            if(V[mid]>V[end]) Swap(&V[start],&V[mid]);
            else if(V[start]>V[end]) Swap(&V[start],&V[end]);
        }
        else
        {
            if(V[mid]<V[end]) Swap(&V[start],&V[mid]);
            else if(V[start<V[end]]) Swap(&V[start],&V[end]);
        }
    //****************************快速排序*********************************
        while(true)
        {
            while(V[++i]<V[start]){}
            while(V[--j]>V[start]){}
            if(i<j)   Swap(&V[i],&V[j]);
            else break;
        }
        Swap(&V[start],&V[j]);
        quick_sort(start,j-1);
        quick_sort(j+1,end);
    }
    else if(end-start==1)
    {
        if(V[start]>V[end]) Swap(&V[start],&V[end]);
    }
    
}
