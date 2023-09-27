#include <iostream>
#include <vector>

#define FOR(i,k,n)  for(int i = (k);i < (n);++i)
#define REP(i,n)    FOR(i,0,n)

using namespace std;

int rnd(int a,int b,int c,int& x){
  return x = (a*x+b) % c;
}

int main()
{
  while(1){
    int n,a,b,c,x;
    cin>>n>>a>>b>>c>>x;
    if(!n) break;
    vector<int> y(n);
    REP(i,n)cin>>y[i];
    int j=0;
    int64_t p=-1;
    REP(i,10001){
      if(x==y[j]){
        ++j;
        if(j==n){
          p=i;
          break;
        }
      }
      rnd(a,b,c,x);
    }
    cout<<p<<endl;
  }
  return 0;
}