#include <iostream>

int main(void){
    int a,b = 0;
    
    std::cin >> a >> b;
    
    if (((-1000 <= a) && (a <= 1000)) && ((-1000 <= b) && (b <= 1000))) {
        
        std::string daisyou = "a == b";
        
        if (a < b) {
            
            daisyou = "a < b";
            
        }else if(a > b){
            
            daisyou = "a > b";
            
        }
        
        std::cout << daisyou << std::endl;
        
    }


    return 0;
}
