#include <iostream>
#include <vector>

int main() {
    long long n, m ,l;
    std::cin >> n >> m >> l;

    std::vector<std::vector<long long> > matrix_a(n, std::vector<long long>(m));
    std::vector<std::vector<long long> > matrix_b(m, std::vector<long long>(l));
    std::vector<std::vector<long long> > matrix_r(n, std::vector<long long>(l, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix_a.at(i).at(j);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            std::cin >> matrix_b.at(i).at(j);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            for (int k = 0; k < m; k++) {
                matrix_r.at(i).at(j) += matrix_a.at(i).at(k) * matrix_b.at(k).at(j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l - 1; j++) {
            std::cout << matrix_r.at(i).at(j) << " ";
        }
        std::cout << matrix_r.at(i).at(l-1) << std::endl;
    }

}
