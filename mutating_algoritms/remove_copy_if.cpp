#include <iostream>
#include <vector>
#include <algorithm>

class obj
{
    public:
        bool operator()(int& a)
        {
            return a % 9 == 0;
        }
};

int main()
{
    std::vector<int> vec = {1,9,9,2,9,9,3,9,4,9,5,6};
    std::vector<int> v(vec.size());
    std::cout <<"\nvec ";
    for(auto i: vec) {
        std::cout << i <<" ";
    }
    std::remove_copy(vec.begin(), vec.end(), v.begin(), 9);
    std::cout <<"\nremove_copy v ";
    for(auto i: v) {
        std::cout << i <<" ";
    }
    std::remove_copy_if(vec.begin(), vec.end(), vec.begin(), obj());
    std::cout <<"\nremove_copy_if vec ";
    for(auto i: vec) {
        std::cout << i <<" ";
    }
    return 0;
}

