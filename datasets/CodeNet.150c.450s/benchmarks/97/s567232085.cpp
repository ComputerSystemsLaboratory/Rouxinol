#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)

typedef long long ll;


int main(void) {
    int n;
    int x[200]={} , y[200]={};
    while (cin>>n && n){
        int l=0,r=0,u=0,d=0;
        REP(i,n-1){
            int k,p;
            cin >> k >> p;
            if (p==0){
                x[i+1] = x[k]-1;
                y[i+1] = y[k];
                l = min(l,x[i+1]);
            }
            if (p==1){
                x[i+1] = x[k];
                y[i+1] = y[k]-1;
                d = min(d,y[i+1]);
            }
            if (p==2){
                x[i+1] = x[k]+1;
                y[i+1] = y[k];
                r = max(r,x[i+1]);
            }
            if (p==3){
                x[i+1] = x[k];
                y[i+1] = y[k]+1;
                u = max(u,y[i+1]);
            }
        }
        cout << r-l+1 << " " << u-d+1 << endl;
    }
    
    return 0;
}