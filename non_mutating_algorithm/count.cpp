#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{ 
    int arr[] = {3, 2, 1, 3, 3, 5, 3, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    std::cout << "Number of times 3 appears   : " << std::count(arr, arr + n, 3); 
    std::cout << std::endl;

    std::vector<int> vect = {1, 2, 1, 3, 3, 5, 3};
    std::cout << "Number of times 3 appears   : " << std::count(vect.begin(), vect.end(), 3); 
    std::cout << std::endl;

    std::string str = "this_string_is_for_testing_count";
    std::cout << "Number of times 'i' appears : " << std::count(str.begin(), str.end(), 'i'); 
    std::cout << std::endl;
} 
