#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=9000000009;


signed main(){
  int n,p;
  while(cin>>n>>p,n!=0){
    int sum=p;
    vector<int> x(n);
    for(int i=0;;){
      if(p){
        x[i%n]++;
        p--;
      }else{
        p+=x[i%n];
        x[i%n]=0;
      }
      if(x[i%n]==sum){
        cout<<i%n<<endl;
        break;
      }
      i++;
    }
  }
  return 0;
}

