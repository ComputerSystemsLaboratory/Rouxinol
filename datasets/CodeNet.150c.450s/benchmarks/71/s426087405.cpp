#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int main() {
    int n[50] = {0};
    REP(a,10) {
        REP(b,10) {
            REP(c,10) {
                REP(d,10) {
                    if (a+b+c+d>0 && a+b+c+d<=50) n[a+b+c+d-1]++;
                }
            }
        }
    }
    
    int k;
    while(cin >> k) {
        cout << n[k-1] << endl;
    }
}