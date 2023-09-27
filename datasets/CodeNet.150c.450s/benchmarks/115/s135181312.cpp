#include <iostream>
#include <string>
#include <vector>

int main() {
    int dataSet;
    std::cin >> dataSet;

    for(int count = 0; count < dataSet; count++) {
        std::string x, y;
        std::cin >> x;
        std::cin >> y;

        std::vector< std::vector<int> > dp;
        dp.resize(x.length());
        for(auto itr = dp.begin(); itr < dp.end(); itr++) {
            itr->resize(y.length());
        }

        for(int xIndex = 0; xIndex < x.length(); xIndex++) {
            for(int yIndex = 0; yIndex < y.length(); yIndex++) {
                int top, topleft, left;
                top = 0; topleft = 0; left = 0;
                if(xIndex != 0) {
                    top = dp[xIndex - 1][yIndex];
                }
                if(yIndex != 0){
                    left = dp[xIndex][yIndex - 1];
                }
                if(xIndex != 0 && yIndex != 0) {
                    topleft = dp[xIndex - 1][yIndex - 1];
                }

                if(x[xIndex] == y[yIndex]) {
                    dp[xIndex][yIndex] = topleft + 1;
                } else {
                    dp[xIndex][yIndex] = top < left ? left : top;
                }
            }
        }

        std::cout << dp.back().back() << std::endl;
    }

    return 0;
}