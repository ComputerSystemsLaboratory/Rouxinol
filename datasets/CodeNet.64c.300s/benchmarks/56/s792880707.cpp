#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FIR first
#define SEC second
#define int long long
using namespace std;

signed main(){
  int n;
  cin>>n;
  int mile=999/3*200+(999-999/3)*195;
  while(n--){
    int y,m,d;
    cin>>y>>m>>d;
    y--;
    int sum=0;
    sum+=y/3*200+(y-y/3)*195;
    y++;
    if(y%3!=0){
      for(int i=1;i<m;i++){
        if(i%2!=0)sum+=20;
        else sum+=19;
      }
    }else{
      sum+=20*(m-1);
    }
    sum+=(d-1);
    cout<<mile-sum<<endl;
  }
  return 0;
}

