#include <iostream>
#include <vector>
#include <algorithm>

class obj
{
    public:
        int operator()()
        {
            static int i = 0;
            return ++i;
        }
};
class obj1
{
    public:
        bool operator()(int& a)
        {
            return a % 2 == 0;
        }
};
int main()
{
    std::vector<int> vec1 = {4,9,7,25,4,12,4,4,9,8,16};
    std::vector<int> vec2(10);
    std::cout << "\nvec1 ";
    for(auto i: vec1) {
        std::cout << i <<" ";
    }
    std::remove(vec1.begin() , vec1.end(), 4);
    std::generate(vec2.begin(), vec2.end(), obj());

    std::cout <<"\nvec2 ";
    for(auto i: vec2) {
        std::cout << i <<" ";
    }
    std::remove_if(vec2.begin(), vec2.end(), obj1());

    std::cout << "\nremove vec1 ";
    for(auto i: vec1) {
        std::cout << i <<" ";
    }
    std::cout <<"\nremove_if vec2 ";
    for(auto i: vec2) {
        std::cout << i <<" ";
    }
    std::cout << std::endl;
    return 0;
}

