#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>
#include <vector>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    ostringstream os;
    while(1) {
        int n, x;
        int count = 0;
        cin >> n >> x;
        if (n == 0 && x == 0)
            break;
        REP(i, n+1){
            if(i == 0)
                continue;
            REP(j, i){
                if(j == 0)
                    continue;
                REP(k, j){
                    if(k == 0)
                        continue;
                    if(i + j + k == x){
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }


    cout << os.str();
    return 0;
}