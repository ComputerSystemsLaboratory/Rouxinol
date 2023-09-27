#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>

constexpr int MAX = 1000;
char ls[MAX];
char rs[MAX];
int table[MAX + 1][MAX + 1];


void calc_lcs() {
    scanf("%s", ls);
    scanf("%s", rs);
    int l_len = int(std::strlen(ls));
    int r_len = int(std::strlen(rs));
    for (int i = 0; i < l_len; i++) {
        table[i][0] = 0;
    }
    for (int i = 0; i < r_len; i++) {
        table[0][i] = 0;
    }

    for (int l_i = 1; l_i < l_len + 1; l_i++) {
        for (int r_i = 1; r_i < r_len + 1; r_i++) {
            if (ls[l_i - 1] == rs[r_i - 1]) {
                table[l_i][r_i] = table[l_i - 1][r_i - 1] + 1;
            } else {
                table[l_i][r_i] = std::max(table[l_i][r_i - 1], table[l_i - 1][r_i]);
            }
        }
    }
    std::cout << table[l_len][r_len] << std::endl;
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        calc_lcs();
    }
}