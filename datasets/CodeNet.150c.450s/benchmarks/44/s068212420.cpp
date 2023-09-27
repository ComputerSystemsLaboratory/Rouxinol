#include <iostream>
#include <vector>
#include <algorithm>
 
int main(){
    std::vector<int> a(4);
     
    while(std::cin >> a[0] >> a[1] >> a[2] >> a[3]){
        int hit = 0, blow = 0;
         
        for(int i = 0; i < 4; ++i){
            int b;
            std::cin >> b;
             
            auto it = std::find(a.begin(), a.end(), b);
            if(it == a.begin() + i) ++hit;
            else if(it != a.end()) ++blow;
        }
         
        std::cout << hit << " " << blow << std::endl;
         
    }
     
    return 0;
}