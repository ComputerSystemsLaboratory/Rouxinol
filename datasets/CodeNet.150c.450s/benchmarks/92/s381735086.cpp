#include <iostream>
#include <vector>
#include <cstdio>

int digitCount(int number)
{
    int result = 1;
    while (number > 9) {
        number /= 10;
        result++;
    }
    return result;
}

int main(int argc, const char * argv[]) {

    std::string line;
    std::vector<int> sum;
    int n1 = 0;
    int n2 = 0;
    
    while (std::getline(std::cin, line))
    {
        sscanf((const char*) line.c_str(), "%d %d", &n1, &n2);
        sum.push_back(digitCount(n1 + n2));
        
    }
    //std::cout << std::endl;
    //std::cout << std::endl;
    
    std::vector<int>::iterator it = sum.begin();
    std::cout << *it << std::endl;
    
    while (++it < sum.end()) {
        
        std::cout << *it << std::endl;
    }
    
    return 0;
}