#include <iostream>
#include <vector>

template <class InputIt, class Size, class OutputIt>
OutputIt copy_n(InputIt first, Size count, OutputIt result)
{
    if (count > 0) {
	*result = *first;
	for (Size i = 0; i < count; ++i) {
		*result++ = *first++;
	}
    }
    return result;
}

int main()
{
    std::vector<int> v{5,4,3,2,1,0};
    std::vector<int> v1(v.size());
    std::vector<int>::iterator it;

    std::cout <<"\nmy vector ";
    for (it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }

    ::copy_n(v.begin(), 2, v1.begin());
    std::cout << "\ncopy_n, v vector to v1 vector ";
    for (it = v1.begin(); it != v1.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
