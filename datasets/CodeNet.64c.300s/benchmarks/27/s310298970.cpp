#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)


int main() {
    while (true) {
        int n, x;
        cin >> n >> x;
        if (n == 0 && x == 0)return 0;
        int cou = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <= n; j++) {
                for (int k = j+1; k <= n; k++) {
                    if (i + j + k == x) {
                        cou++;
                    }
                }
            }
        }
        cout << cou << endl;
    }   
}
