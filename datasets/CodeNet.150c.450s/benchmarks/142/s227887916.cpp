#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
#define mp  make_pair
#define       FOR(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
int main()
{
   ll n,j,k,i,x,y,c=0;
   cin>>n>>k;
   int a[n+2];
   vi v;
   FOR(i,1,n)  cin>>a[i];
    FOR(i,k+1,n)
    {
      if(a[i]>a[i-k])  cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
}