#include <iostream>
#include <numeric>
#include <vector>

template <class Assignable>

void swap(Assignable& a, Assignable& b)
{
    Assignable c(a);
    a = b;
    b = c;
}

template <class ForwardIt1, class ForwardIt2>

void iter_swap(ForwardIt1& a, ForwardIt2& b)
{
    swap(*a, *b);
}

int main()
{
    std::vector<int> v(10);
    std::vector<int>::iterator it;
    iota(v.begin(), v.end(), 1);
    std::cout <<"My v vector ";

    for (it  = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }

    std::vector<int> v1(12);
    std::vector<int>::iterator it1;
    iota(v1.begin(), v1.end(), 4);
    std::cout <<"\nMy v1 vector ";

    for (it  = v1.begin(); it != v1.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout <<"\n\nswapping v and v1 \n";
    iter_swap(v.begin(), v1.begin() + 4);

    std::cout <<"\nMy v vector ";

    for (it  = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }

    std::cout <<"\nMy v1 vector ";

    for (it  = v1.begin(); it != v1.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
