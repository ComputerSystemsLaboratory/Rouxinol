#include <iostream>
 
int main(int argc, const char * argv[]) {
    int cnt;
    for (int n, x; std::cin >> n >> x && !(n == 0 && x == 0); ) {
        cnt = 0;
        for (int i = 1; i <= n - 2; i++) {
            for (int j = i + 1; j <= n - 1; j++) {
                if ( j + 1 <= x - i - j && x - i - j <= n) {
                    cnt++;
                }
            }
        }
        std::cout << cnt << std::endl;
    }
    return 0;
}