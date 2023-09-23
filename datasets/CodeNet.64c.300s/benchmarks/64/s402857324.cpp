#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#define REP(i, N) for(int i = 0; i < N; ++i)
#define REEP(i, N) for(int i = N - 1; i >= 0; --i)
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    while(true) {
        if(x >= y) {
            x = x % y;
            if(x == 0) {
                cout << y << endl;
                break;
            }
        } else {
            y = y % x;
            if(y == 0) {
                cout << x << endl;
                break;
            }
        }
        
    }
}