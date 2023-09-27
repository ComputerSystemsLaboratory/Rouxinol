// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    vector < vector <int> > report;
    report.resize(12);
    for (int i=0; i<12; i++){
        report[i].resize(10);
        for (int j=0; j<10; j++){
            report[i][j] = 0;
        }
    }
    int n;
    std::cin >> n;
    
    int b, f, r, v;
    for (int i=0; i<n; i++){
        std::cin >> b >> f >> r >> v;
        report[3*(b-1) + (f-1)][r-1] += v; 
    }
    for (int i=0; i<12; i++){
        if(i == 3 || i == 6 || i == 9){
            std::cout << "####################" << endl;
        }
        for (int j=0; j<10; j++){
            if (j == 9){
                std::cout << " " << report[i][j] << endl;
            }
            else {
                std::cout << " " << report[i][j];
            }
        }
    }
    return 0;
}

