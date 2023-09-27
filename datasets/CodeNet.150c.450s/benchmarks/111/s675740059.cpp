#include <iostream>
#include <vector>

int main(){
    int n = 0;
    std::cin >> n;

    std::vector<int> tmp(n);
    for(int i = 0; i < n; ++i){
        std::cin >> tmp[i];
    }

    std::vector<std::vector <long int>> joi;
    joi = std::vector<std::vector<long int>>(n, std::vector<long int>(21, 0));

    joi[0][tmp[0]] = 1;

    for(int i = 1; i < n-1; ++i){
        for(int j = 0; j < 21; ++j){
            if(joi[i-1][j] != 0){
                if(j - tmp[i] >= 0) {
                    joi[i][j-tmp[i]] += joi[i-1][j];
                }
                if(j + tmp[i] < 21) {
                    joi[i][j+tmp[i]] += joi[i-1][j];
                }
            }
        }
    }

    std::cout << joi[n-2][tmp[n-1]]  << std::endl;

    return 0;
}