#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <array>
#include <complex>
#include <utility>
#include <map>
int needleX[4] = { -1,0,1,0 };
int needleY[4] = { 0,1,0,-1 };

int main(void) {
    int n;
    std::cin >> n;

    while(n!=0){
    int ans =0;
        for(int i=2;i<=n;i++){
            if((2*n%i)==0&&i%2==1){
                ans++;
            }
        }
        std::cout << ans <<std::endl;
        std::cin >> n;
    }
    return 0;
}
