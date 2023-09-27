#include <iostream>
using namespace std;
int main(void){
    int r, c;
    cin >> r >> c;
    
    int X[r][c], Rsum[c], Csum[r], total = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            Csum[i] = 0;
            Rsum[j] = 0;
        }
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> X[i][j];
            Csum[i] += X[i][j];
            Rsum[j] += X[i][j];
            total += X[i][j];
        }
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << X[i][j] << ' ';
        }
        cout << Csum[i] << std::endl;
    }
    
    for (int j = 0; j < c; j++) {
        cout << Rsum[j] << " ";
    }
    
    std::cout << total << std::endl;
}