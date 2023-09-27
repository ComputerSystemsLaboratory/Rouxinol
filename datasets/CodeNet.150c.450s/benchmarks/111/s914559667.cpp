#include <iostream>
#include <vector>
#include <array>
#include <cmath>

int main(){
    int n, x, a;
    std::array<long int, 21> box, tmp;
    std::cin >> n;
    std::cin.ignore();
    for(int i = 0;i < 21;i++){
        box.at(i) = 0;
        tmp.at(i) = 0;
    }
    std::cin >> x;
    box.at(x) = 1;
    for(int i = 0;i < n - 2;i++){
        std::cin >> x;
        for(int j = 0;j < 21;j++){
            if(box.at(j) != 0){
                if (j + x < 21) {
                    tmp.at(j + x) += box.at(j);
                }
                if (j - x > -1) {
                    tmp.at(j - x) += box.at(j);
                }
                box.at(j) = 0;
            }
        }
        for(int j = 0;j < 21;j++){
            box.at(j) = tmp.at(j);
            tmp.at(j) = 0;
        }
    }
    std::cin >> a;
    std::cout << box.at(a) << std::endl;
}
