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
    std::vector<int> v1(v.size());
    std::vector<int>::iterator it;
    std::cout <<"\nmy vecotr ";
    for (it = v.begin(); it != v.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl; 

    std::copy(v.begin(), v.end(), v1.begin());
    std::cout << "copy vector v to v1 ";
    for (it = v1.begin(); it != v1.end(); ++it) {
	std::cout << *it << " ";
    }
    std::cout << std::endl; 
    
    return 0;
}
