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
    std::vector<int> p(100+1);
    for (int i = 1; i <= n; i++) {
        std::cin >> p[i-1] >> p[i];
    }
    int m[100 + 1][100 + 1];
    for (int i = 1; i <= n; i++) {
        m[i][i] = 0;
    }
    for (int l = 2; l <=n; l++) {
        for (int i = 1; i <= n-l+1; i++) {
            int j = i + l - 1;
            m[i][j] = (1<<21);
            for (int k = i ; k <= j - 1;k++) {
                m[i][j] = std::min(m[i][j],  m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
            }
        }
    }
    /*for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }*/
    std::cout << m[1][n] << std::endl;
    return 0;
}
