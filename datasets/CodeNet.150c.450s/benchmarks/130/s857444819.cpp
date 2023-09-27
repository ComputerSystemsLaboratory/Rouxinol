#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int mat[n][m];
    int vec[m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> mat[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> vec[i];
    }

    for (int i = 0; i < n; ++i) {
        int col = 0;
        for (int j = 0; j < m; ++j) {
            col += mat[i][j] * vec[j];
        }
        std::cout << col << std::endl;
    }

    return 0;
}
