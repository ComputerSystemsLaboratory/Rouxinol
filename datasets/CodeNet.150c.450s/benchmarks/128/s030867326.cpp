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
    string str;
    cin >> str;
    int n=str.length();
    REP(i,n){
        cout << str[n-i-1];
    }
    cout << endl;
    
    
    return 0;
}