#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <algorithm>
#include <functional>

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define ll long long

using namespace std;


int main(void) {
    int n;
    while (cin>>n){
        int ans = 0;
        REP(a,10){
            REP(b,10){
                REP(c,10){
                    REP(d,10){
                        if (a+b+c+d==n)
                            ans++;
                    }
                }
            }
        }
        cout << ans <<endl;;
    }
    return 0;
}