// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    int r, c, r_sum, c_sum;
    vector < vector<int> > sheet;
    std::cin >> c >> r;
    sheet.resize(c+1);
    for (int i=0; i<=c; ++i){
        sheet[i].resize(r+1);
    }
    for (int i=0; i<c; ++i){
        r_sum = 0;
        for (int j=0; j<=r; ++j){
            if (j != r){
                std::cin >> sheet[i][j];
                r_sum += sheet[i][j];
            }
            else {
                sheet[i][j] = r_sum;
            }
        }
    }
    for (int i=0; i<c; ++i){
        for (int j=0; j<=r; ++j){
            if (j == r){
                std::cout << sheet[i][j] << endl;
            }
            else {
                std::cout << sheet[i][j] << " ";
            }
        }
    }
    for (int j=0; j<=r; ++j){
        c_sum = 0;
        for (int i=0; i<=c; ++i){
            if (i != c){
                c_sum += sheet[i][j];
            }
            else {
                sheet[i][j] = c_sum;
                if (j == r){
                    std::cout << sheet[i][j] << endl;
                }
                else {
                    std::cout << sheet[i][j] << " ";
                }
            }
        }
    }
    return 0;
}

