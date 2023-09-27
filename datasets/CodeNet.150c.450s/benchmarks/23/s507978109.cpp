#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
#define CLR(a)     memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)    cerr << #x << " = " << (x) << endl;//debug
#define debug(x)   cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define EPS        1e-10//sample:if((double)>=(double)+EPS)
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);

using namespace std;
unsigned long long int a[100000]={};
unsigned long long int fib(long long int n){
  if(a[n]!=0)return a[n];
  if(n==0)return 1;
  if(n==1)return 1;
  return a[n]=fib(n-1)+fib(n-2);
}


int main(){
  int a;
  cin>>a;
  cout<<fib(a)<<endl;
  return 0;
}
