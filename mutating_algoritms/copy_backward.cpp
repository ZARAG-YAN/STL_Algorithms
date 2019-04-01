#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

template <class BidirIt1, class BidirIt2>
BidirIt2 copy_backward(BidirIt1 first, BidirIt1 last, BidirIt2 result)
{
    while (last != first) {
	*(--result) = *(--last);
    }
	return result;
}

int main()
{
  /*  //copy_backward copies el. from the range [first, last) to [result - (last - fisrt), result)
    std::vector<int> v(12);
    iota(v.begin(), v.end(), 1);
    v.resize(v.size() + 2);
    std::vector<int>::iterator it;

    std::cout <<"\nmy vector ";
    for (it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::copy_backward(v.begin(), v.begin() + 4, v.end()) ;
    std::cout << "copy_backward b vector ";
    for (it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;
*/

    std::vector<int> V(15);
    std::vector<int> V1(14);
    iota(V.begin(), V.end(), 1);
    std::fill(V1.begin(),V1.end(),0);

    std::copy_backward(V.begin(), V.begin() + 10, V1.begin() + 10);
    std::vector<int>::iterator it;

    std::cout <<"\nmy vector ";
    for (it = V.begin(); it != V.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    std::cout <<"\nmy V1 vector ";
    for (it = V1.begin(); it != V1.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
