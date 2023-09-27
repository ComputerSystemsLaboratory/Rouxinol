#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}

int  main(){
  while(1){
    int a,b;
    cin>>a>>b;
    if(a==0&&b==0) break;
    int n[50],it=0,count=a;
    fill(n,n+50,0);
    while(1){
      if(b==1){
	if(count==a-1&&n[it]!=0) break;
	if(count==a) break;
      }
      if(b==0){
	b+=n[it];
	if(n[it]!=0)
	count++;
	n[it]=0;
      }
      else{
	if(n[it]==0) count--;
	n[it]++;
	b--;
      }
      // cout<<it<<" "<<n[it]<<" "<<count<<endl;
      if(it==a-1) it=0;
      else it++;
    }
    cout<<it<<endl;
  }
  return 0;
}

