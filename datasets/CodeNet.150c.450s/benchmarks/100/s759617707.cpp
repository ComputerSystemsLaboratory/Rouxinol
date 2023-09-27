#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    ios::sync_with_stdio(false);
    long long int n,i,fac=1;
    cin >> n;
    for(i=n; i>0; i--)
        fac*=i;
    cout << fac << endl;
    return 0;
}