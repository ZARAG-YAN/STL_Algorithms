#include <iostream>
#include <algorithm>
#include <vector>

int main () 
{
    std::vector<int> vec = {10, 20, 30, 40}; 
    std::vector<int>::iterator it; 
    std::cout << "Vector :"; 
    for (std::vector<int>::iterator it = vec.begin(); it != vec.begin() + 1; ++it) { 
        std::cout << " " << *it; 
    }
    std::cout << std::endl; 
    int ser = 30; 
    it = std::find (vec.begin(), vec.begin()+1, ser); 
    std::cout << *it << std::endl;
    if (it != vec.end()) { 
        std::cout << "Element " << ser <<" found at position : " ; 
        std:: cout << it - vec.begin() + 1 << std::endl; 
    } else {
        std::cout << "Element not found." << std::endl; 
    }
} 
