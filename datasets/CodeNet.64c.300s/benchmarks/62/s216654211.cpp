#include <iostream>
int main(){
    int n,m,x,y;
    std::cin >> n >> m;
    int gyouretu[n][m];
    int bectol[m];
    for(int a = 0;a < n;a++){
        for(int b = 0;b < m;b++){
            std::cin >> gyouretu[a][b];
        }
    }
    for(int c = 0;c < m;c++){
        std::cin >>bectol[c];
    }
    for(int d = 0;d < n;d++){
        y = 0;
        for(int e = 0;e < m;e++){
            x = bectol[e] * gyouretu[d][e];
            y = y + x;
            x = 0;
        }
        std::cout << y <<std::endl;
    }
}