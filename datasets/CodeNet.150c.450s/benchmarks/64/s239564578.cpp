#include <iostream>
#include <string>
#include <algorithm>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;
const int MAX_N = 20;
const int MAX_M = 200;
int A[MAX_N + 1];
int B[MAX_M + 1];
int n, m, i;
bool exhaustive(int i, int m)
{
    if(m == 0) return 1;
    else if(m < 0 || i >= n) return 0;
    else return exhaustive(i + 1, m - A[i]) || exhaustive(i + 1, m);
}
int main()
{
    cin >> n;
    REP(i, n) cin >> A[i];
    cin >> m;
    REP(i, m) cin >> B[i];
    REP(i, m)
    {
        string ans = exhaustive(0, B[i]) ? "yes" : "no";
        cout << ans << endl;
    }
}