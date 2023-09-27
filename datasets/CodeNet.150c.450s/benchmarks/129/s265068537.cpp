#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int r, c;
    std::cin >> r >> c;
    std::vector<std::vector<int>> a(r+1, std::vector<int>(c+1, 0));
    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            std::cin >> a[i][j];
        }
    }
    for(int i=0; i<r; ++i){
        int sum = 0;
        for(int j=0; j<c; ++j){
            sum += a[i][j];
        }
        a[i][c] = sum;
    }
    for(int j=0; j<c; ++j){
        int sum = 0;
        for(int i=0; i<r; ++i){
            sum += a[i][j];
        }
        a[r][j] = sum;
    }
    int sum = 0;
    for(int i=0; i<r; ++i){
        sum += a[i][c];
    }
    a[r][c] = sum;
    for(int i=0; i<r+1; ++i){
        for(int j=0; j<c+1; ++j){
            std::cout << a[i][j] << ((j!=c)?" ":"\n");
        }
    }
    return 0;
}