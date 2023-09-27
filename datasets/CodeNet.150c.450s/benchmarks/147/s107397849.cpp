#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)
#define MAX(a,b) a=a>b?a:b
#define MIN(a,b) a=a<b?a:b
#define REP(i,x,n) for(int i=x;i<n;i++)
#define REPR(i,x,n) for(int i=n-1;i>=x;i--)
#define pb  push_back
#define ALL(obj) (obj).begin(), (obj).end()
#define ALLr(obj) (obj).rbegin(), (obj).rend()
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double PI=3.14159265358979323846;



int main(){
   ll n,cnt=0;
   string s;
ll ans[10101]= { };
cin>>n;
REP(i,1,101) {  
REP(j,1,101) {  
REP(k,1,101) {  
if(i*i+j*j+k*k+j*k+j*i+i*k>n)break;
ans[i*i+j*j+k*k+j*k+j*i+i*k]++;
}
} 
}

rep(i,n) {
cout<<ans[i+1]<<endl;
}

   
}