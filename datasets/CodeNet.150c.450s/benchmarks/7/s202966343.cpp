#include <iostream>
#include <vector>
#include <algorithm>

int
main(void) {

    std::vector<int> v;
    for (int i = 0; i < 10; ++i) {
        int num;
        std::cin >> num;
        v.push_back(num);
    }   
    std::sort(v.begin(), v.end(), std::greater<int>() );

    for (int i = 0; i < 3; ++i) {                                                                                                                                                                   
        std::cout << v[i] << std::endl;
    }   

    return 0;
}