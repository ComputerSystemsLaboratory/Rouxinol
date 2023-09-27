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

void output(vector<int> a){
    REP(i,a.size()){
        cout << a[i];
        if (i<a.size()-1)
            cout << " ";
    }
    cout << endl;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    output(a);
    FOR(i,1,n-1){
        int v=a[i];
        int j=i-1;
        while (j>=0 && a[j]>v){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = v;
        output(a);
    }

    return 0;
}