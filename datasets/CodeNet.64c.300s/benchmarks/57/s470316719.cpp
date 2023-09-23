#include <iostream>
#include <string>
#include <utility>
#include <queue>

int r, c;
int arr[11][10010];

int main() {
    while(std::cin >> r >> c, r + c) {

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            std::cin >> arr[i][j];
        }
    }

    int max = 0;
    for(int i = 0; i < (1 << r); ++i) {
        int sum = 0;
        for(int x = 0; x < c; ++x) {
            int cnt = 0;
            for(int y = 0; y < r; ++y) {
                cnt += arr[y][x] == !!((1 << y) & i);
            }
            sum += std::max(r - cnt, cnt);
        }
        max = std::max(max, sum);
    }

    std::cout << max << std::endl;
    }
}