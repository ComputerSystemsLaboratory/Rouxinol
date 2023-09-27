#include<iostream>
using namespace std;
int main(){
  int n,m,p,x[100],a,ans;
  double b;
  while(1){
    a=0;
    cin>>n>>m>>p;
    if(n+m+p==0)break;
    for(int i=1;i<=n;i++){
      cin>>x[i];
      a+=x[i];
    }
    a*=100;
    if(x[m]==0)cout<<0<<endl;
    else{     
      b=(double)p/100; 
      b=(int)(a*b);
      ans=(a-b)/x[m];
      cout<<ans<<endl;
	}
  }
  return 0;
}