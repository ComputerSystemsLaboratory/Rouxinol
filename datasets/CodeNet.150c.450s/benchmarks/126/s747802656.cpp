#include <iostream>
#include <vector>

int main(){
    while(true) {
        int a = 0, b = 0;
        int n = 0;
        std::cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        std::cin >> n;
        std::vector<std::vector<int>> road;
        road = std::vector<std::vector<int>>(a, std::vector<int>(b, 0));
        for (int i = 1; i < b; ++i) {
            road[0][i] = 1;
        }
        for (int i = 1; i < a; ++i) {
            road[i][0] = 1;
        }
        for (int i = 0; i < n; ++i) {
            int x, y;
            std::cin >> x >> y;
            road[x - 1][y - 1] = -1;
            if(x == 1){
                for(int i = y-1; i< b; ++i){
                    road[0][i] = 0;
                }
            }
            if(y == 1){
                for(int i = x-1; i < a; ++i){
                    road[i][y-1] = 0;
                }
            }
        }
        for (int i = 1; i < a; ++i) {
            for (int j = 1; j < b; ++j) {
                if (road[i][j] == -1) {
                    road[i][j] = 0;
                } else {
                    road[i][j] = road[i-1][j] + road[i][j-1];
                }
            }
        }
        std::cout << road[a - 1][b - 1] << std::endl;
    }
    return 0;
}