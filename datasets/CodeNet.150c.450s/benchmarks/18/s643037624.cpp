#include <bits/stdc++.h>
using namespace std;

#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

int main()
{
    int n;
    cin>>n;
    long long int ans=100000;
    rep(i,n){
        ans+=ans*5/100;
        int temp=ans%1000;
        if(temp!=0){
            ans+=1000;
            ans-=temp;
        }
    }
    cout<<ans<<endl;
}