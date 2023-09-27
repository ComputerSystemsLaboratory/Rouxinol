#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    double loan = 100000;
    for(int i=0; i<n; ++i){
        loan *= 1.05;
        loan = std::ceil(loan/1000)*1000;
    }
    std::cout << std::fixed << std::setprecision(0) << loan << "\n";
    return 0;
}