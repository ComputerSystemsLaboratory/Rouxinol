#include <iostream>
#include <algorithm>
#include <array>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    std::array<std::array<std::array<int, 10>, 3>, 4> num{{}};
    for(int i=0; i<n; ++i){
        int b, f, r, v;
        std::cin >> b >> f >> r >> v;
        num[b-1][f-1][r-1] += v;
    }
    for(int i=0; i<4; ++i){
        for(int j=0; j<3; ++j){
            for(int k=0; k<10; ++k){
                std::cout << " " << num[i][j][k];
            }
            std::cout << "\n";
        }
        if(i!=3){
            std::cout << "####################\n";
        }
    }
    return 0;
}