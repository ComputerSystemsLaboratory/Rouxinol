/* ITP1_6_C: Official House */

#include <iostream>
#include <cstring>
#include <cstdio>

const int N_BUILDINGS = 4;
const int N_FLOORS = 3;
const int N_ROOMS = 10;

int main() {
    int ohouse[N_BUILDINGS][N_FLOORS][N_ROOMS] = {};
    int n_movings;
    int b_num, f_num, r_num;
    int n_people;

    std::cin >> n_movings;
    for (int i = 0; i < n_movings; i++) {
        std::cin >> b_num >> f_num >> r_num >> n_people;
        ohouse[b_num - 1][f_num - 1][r_num - 1] += n_people;
    }

    char divider[20];
    memset(divider, '#', sizeof(char) * 20);

    for (int i_b = 0; i_b < N_BUILDINGS; i_b++) {
        for (int i_f = 0; i_f < N_FLOORS; i_f++) {
            for (int i_r = 0; i_r < N_ROOMS; i_r++) {
                n_people = ohouse[i_b][i_f][i_r];
                printf(" %d", n_people);
            }
            printf("\n");
        }
        if (i_b < N_BUILDINGS - 1) {
            printf("%s\n", divider);
        }
    }
}