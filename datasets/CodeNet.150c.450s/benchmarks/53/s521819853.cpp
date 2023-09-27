#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; ++i)
#define rrep(i,n) for(int i = 1; i <= n; ++i)
using namespace std;
//using ll=long long;
const int MX = 2200000;

int main(){
    int n;cin >> n;
    cout << n << ":";
    for (int i = 2; i *i<=n ; ++i)
    {
        if(n==1) break;
        if(n%i!=0)continue;
        while(n%i==0){
            n = n/i;
            cout<<" " <<i;
        }
    }
if (n!=1)
{
   cout << " "<<n;
}
cout << endl;

    return 0;
}
