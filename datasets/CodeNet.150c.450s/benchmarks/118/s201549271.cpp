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
    int n, Y, M, D;

    // prepare
    const int b = 20;
    const int s = 19;
    int total = 0;
    for (int i = 1; i < 1000; ++i) {
        if ( i % 3 == 0) {
            total += b * 10;
        }
        else total += b * 5 + s * 5;
    }
    total += 1;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>Y>>M>>D;
        int input = 0;
        // Y
        for (int j = 1; j < Y; ++j) {
            if (j % 3 == 0) {
                input += b * 10;
            }
            else input += b * 5 + s * 5;
        }
        // M
        if (Y % 3 == 0) {
            input += b * (M - 1);
        }
        else {
            for (int k = 1; k < M; ++k) {
                if (k % 2 == 0) {
                    input += s;
                }
                else input += b;
            }
        }
        // D
        input += D;

        // ans
        cout<<total - input<<endl;
    }
    return 0;
}