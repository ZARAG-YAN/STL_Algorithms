#include <iostream>
#include <vector>

template <class InputIt, class OutputIt>
OutputIt copy (InputIt first, InputIt last, OutputIt result)
{
	while (first != last) {
	    *result++ = *first++;
	}
	return result;
}

int main()
{
    //copy -- copies elemenet from the range [first, last) to [result, result + (last - first))
    std::vector<int> v{5,4,3,2,1,0};
    std::vector<int> v1;
    v1.resize(v.size());
    std::cout <<"\nmy vecotr ";
    for (auto it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;

    ::copy(v.rbegin(), v.rend(), v1.begin());
    std::cout << "copy vector v to v1 ";
    for (auto it = v1.begin(); it != v1.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
