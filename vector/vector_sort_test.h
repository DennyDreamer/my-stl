#pragma once
/*这里是快速排序的测试程序*/

#include <random>
#include <algorithm>
#include <vector>
#include"vector.h"
int sortTest()
{
    int number=0;
    std::random_device rd;
    std::vector<int> v(10000, 0);
    std::generate(v.begin(), v.end(), [&] { return rd() % 65536; });
    Vector<int> V1(&v[0],0,v.size());
    V1.sort();
    for(int i=0;i<(int)v.size()-1;i++) 
    {
        if(V1.get(i)>V1.get(i+1)) number++;
    }
    std::cout<<"number"<<number<<std::endl;
    return 0;
}
