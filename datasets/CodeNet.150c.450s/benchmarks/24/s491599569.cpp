#include<iostream>
#include<algorithm>
using namespace std;
typedef pair<int,int> P;
int N,M;
P t[10000];

int main(){
  while(1){
    cin>>N>>M;
    if(N==0&&M==0)break;
    for(int i=0;i<N;i++)cin>>t[i].second>>t[i].first;
    sort(t,t+N);
    reverse(t,t+N);
    int ans=0;
    for(int i=0;i<N;i++){
      int d=min(M,t[i].second);
      M-=d;
      ans+=t[i].first*(t[i].second-d);
    }
    cout<<ans<<endl;
  }
  return 0;
}