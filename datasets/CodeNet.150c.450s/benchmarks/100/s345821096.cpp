#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

#define ll (long long)
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)


using namespace std;

int main (void){
  
    int n;
    long long answer = 1;
    cin >> n;
    FOR(i,1,n+1)
    answer = answer*i;
    cout << answer << endl;
    return 0;
}