#include <iostream>
#include <vector>
#include <algorithm>

struct ob1
{
    public:
        int m_sum;

        void operator() (const int& a)
        {
            static int sum = 0;
            sum += a;
            m_sum = sum;
        }
};

int main()
{
    std::vector<int> arr = { 4, 5, 8, 3, 1 };
    for (auto i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "Sum of elements is : ";
    ob1 c = std::for_each(arr.begin(), arr.end(), ob1());
    std::cout << c.m_sum << std::endl;
}
