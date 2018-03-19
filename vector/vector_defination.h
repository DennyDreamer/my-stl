#pragma once
#define DEFAULT_CAPACITY 128
#include<iostream>
template<class T>

class Vector
{
private:
//***************************************变量***********************************************************************
    T* V;
    int _size;//数组实际大小
    int _capacity;//当前实际大小
//***************************************扩容 缩容函数**************************************************************
    void expand();    //扩容函数
    void shrink();    //缩容函数
//***************************************排序函数及辅助函数*********************************************************
    void quick_sort(int start,int end);
protected:
    void V_init(int __size,int __capacity=DEFAULT_CAPACITY)
    {
        _size = __size;
        _capacity=__capacity;
        V=new T[_capacity];
    }
    void copyFrom(T const *A,int low, int high);
public:
//********************************构造与析构函数********************************************************************    
    Vector(T* _V,int low ,int high) // 构造函数 从现有数组复制
    {
        copyFrom(_V,low,high);
    }
    
    Vector(int __capacity=DEFAULT_CAPACITY,int __size=0,T v=0)
    {
        V_init(0,__capacity);
        for(int i=0;i<__size;i++)
        {
            for(int i=0;i<_size;i++)
            {
                V[i]=v;
            }
        }
    }//构造函数 number为初始容量
    Vector(Vector<T> const &_elem){copyFrom(_elem.V,0,_elem._size);}
    Vector(Vector<T> const & _elem, int low ,int high){copyFrom(_elem.V,low,high);}
    ~Vector(){delete [] V;}
//********************************不更改值的函数********************************************************************
    int  getSize(){return _size;}
    int  getCapacity(){return _capacity;}
    int  get(int Rank);
    void show();
    T*   getArray(){return V;}
//********************************更改函数**************************************************************************
    void remove(int Rank);
    void put(int Rank,T elem); // 更改 设置数组元素
    void insert(int Rank,T const &elem);  // 插入
    void Delete(int Rank);     // 删除数组元素
    void traverse();
//********************************排序函数**************************************************************************
    
    void sort(){ quick_sort(0,_size-1); }
};
template<class T>
int  Vector<T> :: get(int Rank)
{
    if(Rank<_size) return V[Rank];
    else 
    {

        std::cout<<"ERROR"<<std::endl;
        return 0;
    }

}
template<class T>
void Vector<T> :: put(int Rank,T elem)
{
    if(Rank<_size) V[Rank]=elem;
    else std::cout<<"ERROR"<<std::endl;
}
