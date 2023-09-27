// ALDS1_10_B Matrix Chain Multiplication
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define INF 900000000
bool debug = false;
std::vector<std::vector<int>> dp;

void MatrixChainMultiplication(std::vector<std::pair<int,int>> sequence) {
    dp.resize(sequence.size());
    for (int i=0; i<dp.size(); i++) dp.at(i).resize(sequence.size());

    /*
    example:
        aN is a matrix. 
        ... a3 (a4 a5 a6)*(a7 a8) a9 ...
        i = 5, j = 4, k = 3
    */

    /* i = length of set */
    for (int i=2; i<dp.size(); i++) {
        /* j = front point */
        for (int j=1; j<=dp.at(i).size()-i; j++) {
            /* initialization of dp.at(i).at(j) */
            dp.at(i).at(j) = INF;
            /* k = dividing point */
            for (int k=1; k<i; k++) {
                if (i == 2) {
                    dp.at(i).at(j) = sequence.at(j).first*sequence.at(j).second*sequence.at(j+1).second;
                } else {
                    dp.at(i).at(j) = std::min(dp.at(i).at(j),
                                              dp.at(k).at(j)+dp.at(i-k).at(j+k)+sequence.at(j).first*sequence.at(j+k-1).second*sequence.at(i+j-1).second);
                    
                }
            }
            if (debug) {
                std::cout << "dp.at(" << i << ").at(" << j << ") = " << dp.at(i).at(j) << ":";
                for (int n=j; n<i+j; n++) std::cout << " " << n;
                std::cout << "\n";
            }
        }
    }
    std::cout << dp.back().at(1) << "\n";
}

int main() {
    int total; std::cin >> total;
    std::vector<std::pair<int,int>> sequence;
    sequence.resize(total+1);
    for (int i=1; i<sequence.size(); i++) {
        std::cin >> sequence.at(i).first >> sequence.at(i).second;
    }
    MatrixChainMultiplication(sequence);
}   
