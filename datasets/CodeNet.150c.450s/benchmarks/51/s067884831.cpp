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
    int a[30]={};
    REP(i,28){
        int t;
        cin >> t;
        a[t-1]++;
    }
    REP(i,30){
        if(a[i]==0)
            cout << i+1 <<endl;
    }
    
    return 0;
}