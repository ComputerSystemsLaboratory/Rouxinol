#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[]) {
    int n, a, b, c, x;
    while (cin>>n>>a>>b>>c>>x, n||a||b||c||x) {
        int y[100];
        for (int i = 0; i < n; ++i) {
            cin>>y[i];
        }
        int pos = 0;
        bool flag = true;
        for(int i = 0; i <= 10000; i++){
            if(y[pos] == x) pos++;
            if(pos == n) {
                cout << i << endl;
                flag = false;
                break;
            }
            x = (a * x + b) % c;
        }
        if(flag) cout << "-1" <<endl;
    }
    return 0;
}
