#include <iostream>
#include <vector>

int main(){
    std::vector<int> a, b;
    a.resize(4);
    b.resize(4);
    while(std::cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
        int hitcount = 0, blowcount = 0;
        for(int i = 0; i < 4; ++i){
            if(a.at(i) == b.at(i))
                ++hitcount;
        }
        for(int value_a : a){
            for(int value_b : b){
                if(value_a == value_b)
                    ++blowcount;
            }
        }
        std::cout << hitcount << " " << blowcount - hitcount << std::endl;
    }
}