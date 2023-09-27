#include<bits/stdc++.h>
using  namespace  std;

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'

typedef long long int ll;
typedef unsigned long long int  llu;

int main()
{
    int N,K;
    cin>>N>>K;
    int A[N+1];
    for(int i=1; i<=N; i++)
        cin>>A[i];


    for(int i=K+1; i<=N; i++)
    {
        if(A[i-K]<A[i])
            cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }
    return 0;
}
