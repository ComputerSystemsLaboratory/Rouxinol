#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c,x;
  int y[10000];
  int cnt,ans,i;
  while(1){
    for(int i=0;i<10000;i++){
      y[i]=0;
    }
    cnt=ans=0;
    cin>>n>>a>>b>>c>>x;
    if(n==0 && a==0 && b==0 && c==0 && x==0) break;
    for(int i=0;i<n;i++){
      cin>>y[i];
    }
    i=0;
    while(cnt<n){
      if(x==y[i]){
	cnt++;
	y[i]=-1;
	i++;
      }
    x=(a*x+b)%c;
    if(cnt<n) ans++;
    if(ans==10001) break;
    }
    if(ans==10001) cout<<-1<<endl;
    else cout<<ans<<endl;
  }
  return 0;
}

