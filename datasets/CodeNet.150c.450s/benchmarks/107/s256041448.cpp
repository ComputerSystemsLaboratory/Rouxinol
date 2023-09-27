#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main() {
    std::string x, y;
    std::cin >> x;
    std::cin >> y;

    std::vector< std::vector<int> > dp;
    dp.resize(x.length() + 1);
    for(auto itr = dp.begin(); itr < dp.end(); itr++) {
        itr->resize(y.length() + 1);
    }

    for(int xIndex = 0; xIndex <= x.length(); xIndex++) {
        for(int yIndex = 0; yIndex <= y.length(); yIndex++) {
            if(xIndex == 0 && yIndex == 0) {
                dp[xIndex][yIndex] = 0;
                continue;
            }

            if(xIndex == 0) {
                dp[xIndex][yIndex] = dp[xIndex][yIndex - 1] + 1;
                continue;
            }

            if(yIndex == 0) {
                dp[xIndex][yIndex] = dp[xIndex - 1][yIndex] + 1;
                continue;
            }

            int top, topleft, left;
            top = dp[xIndex - 1][yIndex];
            left = dp[xIndex][yIndex - 1];
            topleft = dp[xIndex - 1][yIndex - 1];

            if(x[xIndex - 1] == y[yIndex - 1]) {
                dp[xIndex][yIndex] = topleft;
            } else {
                topleft++; left++; top++;
                int smallest = topleft < left ? topleft : left;
                smallest = smallest < top ? smallest : top;
                dp[xIndex][yIndex] = smallest;
            }
        }
    }

    std::cout << dp.back().back() << std::endl;

    return 0;
}