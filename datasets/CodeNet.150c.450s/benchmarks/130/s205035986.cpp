#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>

int main(){
    int n, m;

    std::cin >> n >> m;

    std::vector<std::vector<int> > v(n, std::vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> v[i][j];
        }
    }

    std::vector<int> v2(m);
    for (int i = 0; i < m; i++) {
        std::cin >> v2[i];
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += v2[j] * v[i][j];
        }
        std::cout << sum << std::endl;
    }

    return 0;
}