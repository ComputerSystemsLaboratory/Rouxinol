#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
int main(){
  while(1){
    int n,m;
    cin>>n>>m;
    if(n==0&&m==0) break;
    int a[100],b[100],suma=0,sumb=0;
    lp(i,n){
      cin>>a[i];
      suma+=a[i];
    }
    lp(i,m){
      cin>>b[i];
      sumb+=b[i];
    }
    int ans1=-1,ans2=-1;
    int sum=1000000;
    lp(i,n){
      lp(j,m){
	if(suma+b[j]-a[i]==sumb+a[i]-b[j]){
	  if(sum>a[i]+b[j]){
	    sum=a[i]+b[j];
	    ans1=a[i];
	    ans2=b[j];
	  }
	}
      }
    }
    if(ans1==-1&&ans2==-1)
      cout<<-1<<endl;
    else cout<<ans1<<" "<<ans2<<endl;
  }
  return 0;
}

