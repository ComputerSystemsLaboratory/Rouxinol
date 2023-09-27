#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
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

#define N 1000000

int x[1000001]={} , y[1000001]={};

int main(void) {
    vector<int> a,b;
    int i=1;
    while (i*(i+1)*(i+2)/6<=N){
        int f = i*(i+1)*(i+2)/6;
        a.push_back(f);
        if (f%2==1)
            b.push_back(f);
        i++;
    }
    int n = a.size() , m = b.size();
    FOR(i,1,N){
        x[i] = N;
        y[i] = N;
    }
    FOR(i,0,N-1){
        REP(j,n){
            if (i+a[j]>N)
                break;
            x[i+a[j]] = min(x[i+a[j]],x[i]+1);
        }
        REP(j,m){
            if (i+b[j]>N)
                break;
            y[i+b[j]] = min(y[i+b[j]],y[i]+1);
        }
    }
    while (cin >> n && n){
        cout << x[n] << " " << y[n] << endl;
    }

    return 0;
}