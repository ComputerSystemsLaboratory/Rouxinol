#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j;
  int y[100],a,b,c,n,x;
  while(cin>>n>>a>>b>>c>>x&&n+a+b+c+x){
    for(i=0;i<n;i++)
      cin>>y[i];
    j=0;
    for(i=0;i<10001;i++){
      if(y[j]==x){
	j++;
	if(j==n)
	  break;
      }
      x=(a*x+b)%c;
    }
    if(i==10001)
      cout<<-1<<endl;
    else
      cout<<i<<endl;
  }
  return 0;
}