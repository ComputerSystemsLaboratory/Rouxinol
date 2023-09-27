#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}

int main(){
  while(1){
    int n,a,b,c,x;
    cin>>n>>a>>b>>c>>x;
    if(n==0&&a==0&&b==0&&c==0&&x==0) break;
    int ans=0;
    int j,i;
    for(i=0;i<n;i++){
      int rand;
      cin>>rand;
      for(j=0;j<10001;j++){
	if(x==rand){
	  rand=-1;
	  break;
	}
	x=(a*x+b)%c;
	ans++;
	if(ans>10000){
	  ans=-1;
	  break;
	}
      }
      if(ans==-1){
	ans=-1; break;
      }
      if(rand!=-1){
	ans=-1; break;
      }
      x=(a*x+b)%c;
      ans++;
    }
    if(i==n-1) 1;
    else lp(k,n-1-i){
	int rand;
	cin>>rand;
      }
    if(ans==-1) cout<<"-1"<<endl;
    else cout<<ans-1<<endl;
  }
  return 0;
}

