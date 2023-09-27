#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <algorithm>

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define ll long long int

using namespace std;

int main(void) {
    int s=0 , t=0;
    REP(i,4){
        int a;
        cin >> a;
        s+=a;
    }
    REP(i,4){
        int a;
        cin >> a;
        t+=a;
    }
    cout << max(s,t) << endl;
    
    return 0;
}