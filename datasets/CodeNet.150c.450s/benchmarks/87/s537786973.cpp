#include<bits/stdc++.h>
using namespace std;
int main(){
  int h;
  while(cin>>h,h){
    int a[10][5],ans=0;
    for(int i=0;i<h;i++)
      for(int j=0;j<5;j++)cin>>a[i][j];
    bool f=1;
    while(f){
      f=0;
      for(int i=0;i<h;i++){
	int c=1,p=0;
	for(int j=1;j<5;j++)
	  if(a[i][p]==a[i][j])c++;
	  else if(c<3)c=1,p=j;
	  else break;
	if(c>=3){
	  ans+=c*a[i][p];
	  for(int k=0;k<c;k++)a[i][p+k]=0;
	}
      }
      for(int i=0;i<5;i++)
	for(int j=1;j<h;j++)
	  for(int k=j;k>0;k--)
	    if(!a[k][i]&&a[k-1][i])swap(a[k][i],a[k-1][i]),f=1;
    }
    cout<<ans<<endl;
  }
  return 0;
}