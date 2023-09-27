#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>

int main(){
    int n, m, l;

    std::cin >> n >> m >> l;

    std::vector<std::vector<long long> > v(n, std::vector<long long>(m));
    std::vector<std::vector<long long> > v2(m, std::vector<long long>(l));
    std::vector<std::vector<long long> > ans(n, std::vector<long long>(l));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> v[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            std::cin >> v2[i][j];
        }
    }

    for (int i = 0; i < n * l; i++) {
        long long sum = 0;
        for (int j = 0; j < m; j++) {
            sum += v[i / l][j] * v2[j][i % l];
        }
        ans[i / l][i % l] = sum;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            std::cout << ans[i][j] << (j != l - 1 ? " " : "");
        }
        std::cout << std::endl;
    }

    return 0;
}