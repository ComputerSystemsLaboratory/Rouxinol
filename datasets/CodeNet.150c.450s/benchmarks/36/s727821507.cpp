#include <iostream>
 
int main(){
    int d;
     
    while(std::cin >> d){
        int sum = 0;
        for(int i = d; i < 600; i += d){
            sum += i*i*d;
        }
         
        std::cout << sum << std::endl;
    }
     
    return 0;
}