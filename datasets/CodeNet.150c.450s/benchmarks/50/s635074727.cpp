#include <iostream>

int main(){
    while(true){
        int n;
        std::cin >> n;
        
        if(n == 0) {
            break;
        }
        
        n = 1000 - n;
        
        int count = 0;
        
        count += n / 500;
        n %= 500;
        count += n / 100;
        n %= 100;
        count += n / 50;
        n %= 50;
        count += n / 10;
        n %= 10;
        count += n / 5;
        n %= 5;
        count += n / 1;
        n %= 1;
    
        std::cout << count << std::endl;
    }
}