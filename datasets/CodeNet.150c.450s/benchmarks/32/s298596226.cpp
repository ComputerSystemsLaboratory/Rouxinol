#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m,a,b;
  int p[401];

  while(1){
    cin>>m>>a>>b;
    if(m+a+b==0)break;
    for(int i=0;i<m;i++)cin>>p[i];
    sort(p,p+m);
    reverse(p,p+m);

    int ans=0,tmp=0;
    for(int i=a;i<=b;i++){
      if(tmp<=p[i-1]-p[i]){
	ans=i;
	tmp=p[i-1]-p[i];
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}