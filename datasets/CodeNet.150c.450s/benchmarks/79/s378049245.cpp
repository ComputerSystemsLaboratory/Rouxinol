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
    int n,r;
    while (cin>>n>>r && n){
        vector<int> a(n);
        REP(i,n){
            a[i] = i+1;
        }
        while(r--){
            int p,c;
            cin >> p >> c;
            REP(i,c){
                int k=a[n-p-c+1];
                a.erase(a.begin()+n-p-c+1);
                a.push_back(k);
            }
        }
        cout << a[n-1] << endl;
    }
    
    return 0;
}