#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<climits>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
#define FOR(i, j, k) for(int i = j; i < k; i++)
#define P pair<int, int>
const int INF = INT_MAX / 2;

int main(){
    int n;
    while(cin >>n && n){
        vector<int> vec(n + 1, 0); FOR(i, 1, n + 1) cin >>vec[i];
        FOR(i, 1, n + 1) vec[i] += vec[i - 1];
        int ans = -1 * INF;
        REP(i, n + 1) FOR(j, i + 1, n + 1) ans = max(ans, vec[j] - vec[i]);
        cout <<ans <<endl;
    }
    return 0;
}