#include <iostream>

int main(){
    int a_num[4];
    int b_num[4];
    
    while (true) {
        
        // input a's number.
        for (int i=0; i<4; ++i) {
            if(! (std::cin >> a_num[i]) ){
                return 0;
            }
        }
        // input b's number.
        for (int i=0; i<4; ++i) {
            if(! (std::cin >> b_num[i]) ){
                return 0;
            }
        }
        
        // count hit.
        int hit=0;
        for (int i=0; i<4; ++i) {
            if (a_num[i] == b_num[i]) {
                ++hit;
            }
        }
        std::cout << hit << " ";
        
        // count blow.
        int blow=0;
        for (int i=0; i<4; ++i) {
            for (int j=0; j<4; ++j) {
                if (i!=j && b_num[i] == a_num[j]) {
                    ++blow;
                }
            }
        }
        std::cout << blow << std::endl;
        
    }
    return 0;
}