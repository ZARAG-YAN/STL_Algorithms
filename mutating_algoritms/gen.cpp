#include <iostream>
#include <vector>
#include <algorithm>

class obj
{
    public:
    int operator()()
    {
        static int i = 0;
        return i++;
    }
};


int main()
{
    std::vector<int> v(10);
    std::generate(v.begin(), v.end(), obj());

    for (auto i:v) {

        std::cout << i <<" ";
    }
    return 0;
}
