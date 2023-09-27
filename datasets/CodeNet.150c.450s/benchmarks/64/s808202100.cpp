#include <iostream>
using namespace std;

int n, A[30];
int solve(int i, int m)
{
    if(m == 0)   return 1;
    if(i >= n)   return 0;
    int res = solve(i+1,m) || solve(i+1,m-A[i]);
    return res;
}
int main()
{
    int q, m[205];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> A[i];
    cin >> q;
    for(int i=0; i<q; i++)
    {
        cin >> m[i];
        int k = 0;
        if(solve(k,m[i]))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}