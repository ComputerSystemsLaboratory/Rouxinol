#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int N, A, B, C, X;
    while ( cin >> N >> A >> B >> C >> X ) {
        if ( N == 0 && A == 0 && B == 0 && C == 0 && X == 0 ) break;
        vector <int> Y;
        int y;
        for ( int i = 0; i < N; i++ ) {
            cin >> y;
            Y.push_back(y);
        }

        int yi = 0;
        bool flag = true;
        for ( int i = 0; i <= 10000; i++ ) {
            if ( X == Y[yi] ) {
                yi++;
                if ( yi == N ) {
                    cout << i << endl;
                    flag = false;
                    break;
                }
            }
            X = ( A * X + B ) % C;
        }

        if ( flag ) {
            cout << -1 << endl;
        }
    }
    return 0;
}