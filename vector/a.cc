#include <iostream>
#include <vector>
#include <iterator>
#include <map>

template <int N>
struct Foo
{
    enum { value =  Foo<N-1>::value + Foo<N-2>::value };
};

template <>
struct Foo<0>
{
    enum { value = 1 };
};

template <>
struct Foo<1>
{
    enum { value = 1 };
};


int main() {
    std::cout << Foo<10>::value << std::endl;
    std::map<int, int> m = { { 1, 1 }, {2, 2}, {3, 3} };
    for(auto it = m.begin(); it != m.end(); ++it) {
        std::cout << it->first << " " << it->second << std::endl;
    }
    for(auto& p : m) {
        std::cout << p.first << " " << p.second << std::endl;
    }
    for(auto& [key, value] : m) {
        std::cout << key << " " << value << std::endl;
    }
    int n = balabal();
    if(n < 0) {
        return 0;
    }

    if(auto n = _balbaba(); n < 0) {
        return 0;
    }

    std::vector<int> v { 1, 2, 3 ,4, 5 };
    std::vector v1{1, 2, 3, 4, 5};
    /* std::vector<int> v{1, 2, 3, 4, 5, 6}; */
    /* for(auto it = v.begin(); it != v.end(); ++it) { */
    /*     std::cout<< *it << std::endl; */
    /* } */

    /* std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, "\n")); */

    /* for(auto &n : v) { */
    /*     std::cout << n << std::endl; */
    /* } */

    /* std::vector<int> w(std::istream_iterator<int>{std::cin},std::istream_iterator<int>{}); */
    /* std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, "\n")); */

    return 0;
}
