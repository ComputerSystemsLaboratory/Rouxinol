#include <algorithm>
#include <bitset>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <cctype>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <limits>
#include <map>
#include <memory>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#define ArraySizeOf(array)     (sizeof(array) / sizeof(array[0]))
#define res(i,n) for(int i=n;;i++)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i,n) for(int i=1;i<n;i++)
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define REV(i,n) for(int i=n-1;i>0;i--)
#define req(i,n,m) for(int i=n;i<m;i++)
#define REQ(i,n,m,l) for(int i=n;i<m;i+=l) 
#define _GLIBCXX_DEBUG
int INF = 1e9 + 7;
long double PI = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998626034825342117;
unsigned NthDayOfWeekToDay(unsigned n, unsigned dow, unsigned dow1)
{
    unsigned day;
    if (dow < dow1) dow += 7;
    day = dow - dow1;
    day += 7 * n - 6;
    return day;
}
signed gcd(long long x, long long y) {
    if (y == 0)return x;
    return gcd(y, x % y);
}
signed lcm(long long x, long long y) {
    return x / gcd(x, y) * y;
}
unsigned DayToWeekNumber(unsigned day)
{
    return (day - 1) / 7 + 1;
}
unsigned AnotherDayOfWeek(unsigned day, unsigned day0, unsigned dow0)
{
    return (dow0 + 35 + day - day0) % 7;
}
using namespace std;
void dfs() {

}
int main() {
    cout << "Yes" << endl;
    int N, M; cin >> N >> M;
    vector<int>A(M);
    vector<int>B(M);
    vector<vector<int>>G(N);
    rep(i, M) {
        cin >> A[i] >> B[i];
        G[A[i]-1].push_back(B[i]);
        G[B[i]-1].push_back(A[i]);
    }
    vector<int>GO(N, -1);
    queue<int>go;
    GO[0] = 0;
    go.push(0);
    while (!go.empty()) {
        int a = go.front();
        go.pop();
        for (int i : G[a]) {
            if (GO[i-1] != -1)continue;
            GO[i-1] = a+1;
            go.push(i-1);
        }
    }
    REP(i, N)cout << GO[i] << endl;
}