#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int y, m, d;
        cin >> y >> m >> d;
        int day = 0;
        day += (y % 3 ? (m % 2 ? 21 : 20) : 21) - d;
        for (int j = m + 1; j <= 10; ++j) {
            day += y % 3 ? (j % 2 ? 20 : 19) : 20;
        }
        for (int j = y + 1; j < 1000; ++j) {
            day += j % 3 ? 195 : 200;
        }
        std::cout << day << std::endl;
    }
}