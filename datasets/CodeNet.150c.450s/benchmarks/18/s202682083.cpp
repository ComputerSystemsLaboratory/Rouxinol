#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++) 
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
int main()
{
    int M{ 100000 };
    int N;
    cin >> N;
    REP( i, N )
    {
        M = (int)( M * 1.05 + 999 ) / 1000 * 1000;
    }
    cout << M << endl;
    return 0;
}