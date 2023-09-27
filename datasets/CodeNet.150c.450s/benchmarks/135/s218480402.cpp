#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
int main(){
  while(true){
    int N,M,ans=0;
    cin>>N>>M;
    if(N==0&&M==0) break;
    int h[N+1],w[M+1];
    h[0]=0;
    w[0]=0;
    int value;
    for(int i=1;i<=N;i++){
      cin>>value;
      h[i]=h[i-1]+value;
    }
    for(int i=1;i<=M;i++){
      cin>>value;
      w[i]=w[i-1]+value;
    }
    int val[1500000]={};
    for(int i=0;i<N;i++){
      for(int j=i+1;j<=N;j++){
        val[abs(h[j]-h[i])]++;
      }
    }
    for(int i=0;i<M;i++){
      for(int j=i+1;j<=M;j++){
        if(abs(w[j]-w[i])!=0)ans+=val[abs(w[j]-w[i])];
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}