#include <iostream>
#include"vector.h"
#include<time.h>
#include"vector_sort_test.h"
void ceshi()
{
    clock_t Time1,Time2;
    int *A=new int[128];
    Vector<int> V1(A,0,127);
    V1.show();
    Time1=clock();
    for(int i =0;i<1000;i++)
    {
        V1.insert(0,i);
    }
    V1.show();
    Time2=clock();
    std::cout<<(double)(Time2-Time1)/CLOCKS_PER_SEC<<"s"<<std::endl;
    
    for(int i=0;i<1000;i++)
    {
        V1.remove(0);
    }
    Time1=clock();

    std::cout<<(double)(Time1-Time2)/CLOCKS_PER_SEC<<"s"<<std::endl;
    V1.show();
}
int main()
{
    sortTest();
    return 0;
}

