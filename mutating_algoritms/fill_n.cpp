#include <iostream>
#include <vector>

template <class OutputIt, class Size, class T>
OutputIt my_fill_n(OutputIt first, Size n, const T& value)
{
	while (n > 0) {
         *first = value;
         ++first;
         --n;
	}
    return first;
}

int main()
{
    //all elements get value value
    std::vector<int> v{7,6,5,4,3,2,1,0};
    std::vector<int>::iterator it;
    std::cout <<"\nmy vecotr ";
    for (it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;

    int n = 4;
    my_fill_n(v.begin(), 4,6 );
    for (it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
