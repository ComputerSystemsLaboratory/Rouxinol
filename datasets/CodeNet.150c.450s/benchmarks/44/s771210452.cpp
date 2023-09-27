#include<iostream>
#include<array>

int main(){
    std::array<int, 4> a;
    std::array<int, 4> b;
    while(std::cin >> a[0] >> a[1] >> a[2] >> a[3]){
        std::cin >> b[0] >> b[1] >> b[2] >> b[3];
        int hit = 0, blow = 0;
        for(int i = 0; i < a.size(); ++i){
            for(int j = 0; j < b.size(); ++j){
                if(a[i] == b[j] && i == j)
                    ++hit;
                else if (a[i] == b[j])
                    blow ++;
            }
        }
          std::cout << hit << " " << blow << std::endl;
    }
      return 0;
}