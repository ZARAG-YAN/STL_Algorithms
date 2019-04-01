#include <iostream>
#include <vector>

template <class ForwardIt, class T>
void fill (ForwardIt first, ForwardIt last, const T& value)
{
	while (first != last) {
	    *first = value;
        ++first;
	}
}

int main()
{
    //all elements get value value
    std::vector<int> v{5,4,3,2,1,0};
    std::vector<int>::iterator it;
    std::cout <<"\nmy vecotr ";
    for (it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;

    fill(v.begin(), v.end(), 4);
    std::cout << "copy vector v to v1 ";
    for (it = v1.begin(); it != v1.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
