#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#define N 10
class dec
{
    public:
        int operator()(int& a, int& b)
        {
            return a - b;
        }
};

class inc
{
    public:
        int operator()(int& a, int& b)
        {
            return a + b;
        }
};

int main()
{
    std::vector<int> V1(N);
    std::vector<int> V2(N);
    std::vector<int> V3(N);

    iota(V1.begin(), V1.end(), 2);
    std::fill(V2.begin(), V2.end(), 5);

    std::transform(V1.begin(), V1.end(), V2.begin(), V3.begin(), dec());
    //std::transform(V1.begin(), V1.end(), V2.begin(), V3.begin(), inc());
    std::cout <<"\nV1 ";
    for (auto i:V1) {
       std::cout << i << " ";
    }
    std::cout <<"\nV2 ";
    for (auto i:V2) {
       std::cout << i << " ";
    }
    std::cout <<"\nV3 ";
    for (auto i:V3) {
       std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
