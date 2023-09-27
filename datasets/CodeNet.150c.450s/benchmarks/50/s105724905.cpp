#include <iostream>

int main(){
    while(true){
        int N;
        std::cin >> N;
        
        if(N == 0){
            break;
        }
        
        N = 1000 - N;
        
        int count = 0;
        
        count += N / 500;
        N %= 500;
        count += N / 100;
        N %= 100;
        count += N / 50;
        N %= 50;
        count += N / 10;
        N %= 10;
        count += N / 5;
        N %= 5;
        count += N / 1;
        N %= 1;
        
        std::cout << count << std::endl;
    }

    return 0;
}