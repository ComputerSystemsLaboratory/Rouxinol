#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

int main(){
    int a;
    int max;
    int min;
    int b_max;
    int b_min;
    int c;
    int dif;
    cin >> a;
    if (a < 2) {
        cout << "error" << endl;
        return 1;
    }
    //int b;
    //b = a - 1;
    //vector<int> v(a);
    cin >> c;
    max = -100000;
    min = c;
    dif = max - min;
    FOR(i, 1, a){
        cin >> c;
        if (max < c) {
            max = c;
            //cout << "max is " << max << endl;
        }
        if (min > c) {
            if (i != a - 1) {
                if (dif < max - min) {
                    dif = max - min;
                }
                min = c;
                max = 0;
                //cout << "min is " << min << endl;
                //cout << "max is " << max << endl;
            } 
        }
    }
    int ans;
    ans = max - min;
    if (ans > dif) {
        cout << ans << endl;        
    }
    else {
        cout << dif << endl;
    }
}