#include <iostream>
#include <vector>
//#include <algorithm>
#include <numeric>

template <class BidirIt1, class BidirIt2>
BidirIt2 copy_backward (BidirIt1 first, BidirIt1 last, BidirIt2 result)
{
    while (last != first) {
	*(--result) = *(--last);	
    }
	return result;
}

int main()
{
    //copy_backward copies el. from the range [first, last) to [result - (last - fisrt), result) 
    std::vector<int> v(12);
    iota(v.begin(), v.end(), 1);
    v.resize(v.size() + 2);
    std::vector<int>::iterator it;

    std::cout <<"\nmy vector ";
    for (it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl; 

    copy_backward(v.begin(), v.begin() + 4, v.end()) ;
    std::cout << "copy_backward b vector ";
    for (it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
