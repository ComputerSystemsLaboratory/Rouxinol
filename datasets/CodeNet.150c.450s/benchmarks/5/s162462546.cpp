#include <iostream>
#include <vector>
                 
int main() {     
    std::vector<int> arr;
    int len, num = 0;
    std::cin >> len;
    for(int i = 0; i < len; i++) {
        std::cin >> num;
        arr.push_back(num);
    }            
    for(int i = len-1; i >= 0; i--) {
        std::cout << arr[i];
        if(i != 0) std::cout << " ";
    }            
    std::cout << std::endl;
    return 0;    
}