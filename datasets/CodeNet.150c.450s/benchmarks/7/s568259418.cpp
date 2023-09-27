#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define RREP(i,n) for(int i = (n)-1; i >= 0; i--)
#define FOR(i, l, r) for(int i = l; i < r; i++)
#define RFOR(i, l,r) for(int i= (l)-1; i>= (r) ; i--)

#define int64 int64_t
#define uint64 uint64_t
#define uint unsigned

int main()
{
    array<int, 10> hei;
    REP(i, 10)
        cin >> hei[i];
    sort(hei.begin(), hei.end(), [](int a, int b){ return a > b;});
    REP(i, 3)
        cout << hei[i] << '\n';
}