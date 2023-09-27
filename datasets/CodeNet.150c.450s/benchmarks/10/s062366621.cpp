#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define RREP(i,n) for(int i = (n)-1; i >= 0; i--)
#define FOR(i, l, r) for(int i = l; i < r; i++)
#define RFOR(i, l,r) for(int i= (l)-1; i>= (r) ; i--)

#define int64 int64_t
#define uint64 uint64_t
#define uint unsigned

array< array< array<short, 10>, 3>, 4> in = { 0 };
constexpr char sa[] = "####################\n";

int main()
{
    int n;
    cin >> n;
    REP(i, n)
    {
        short b, f, r, v;
        cin >> b >> f >> r >> v;
        in[b-1][f-1][r-1] += v;
    }
    REP(q, 3)
        {
            REP(r, 10)
                cout << ' ' << in[0][q][r];
            cout << '\n';
        }
    FOR(p, 1, 4){
        cout << sa;
        REP(q, 3)
        {
            REP(r, 10)
                cout << ' ' << in[p][q][r];
            cout << '\n';
        }
    }
}