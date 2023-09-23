#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
#include<functional>
#define ll long long
#define inf  1000000007
#define pa pair<int,int>
using namespace std;

ll po(ll m,ll n){
ll k;
if(n==1) k= m%inf;
else if(n%2==0) k= (po(m,n/2)*po(m,n/2))%inf;
else  k=(m*(po(m,n-1)%inf))%inf;
//cout<<m<<" "<<n<<" "<<k<<endl;

return k;
}

int main(){
ll m,n;
cin>>m>>n;
cout<<po(m,n)<<endl;

return 0;
}