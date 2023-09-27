#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define pb push_back

int main()
{
  int a[114514];
  int b[114514];
  
  int n,m;
  while(1){
    cin>>n>>m;
    if(n==0&&m==0){
      return 0;
    }
    int a_total=0;
    int b_total=0;
    rep(i,n){
      cin>>a[i];
      a_total+=a[i];
    }
    rep(i,m){
      cin>>b[i];
      b_total+=b[i];
    }

    int ans1=114514;
    int ans2=114514;
    rep(i,n){
      rep(j,m){
	if(a_total+b[j]-a[i]==b_total+a[i]-b[j]){
	  if(a[i]+b[j]<ans1+ans2){
	    ans1=a[i];
	    ans2=b[j];
	  }
	}
      }
    }
    if(ans1==114514){
      cout<<-1<<endl;
    }else{
      cout<<ans1<<" "<<ans2<<endl;
    }
  }
}