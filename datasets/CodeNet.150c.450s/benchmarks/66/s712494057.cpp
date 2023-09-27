#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){

  int n,m,count=0;
  char u[257][11],t[257][11];
  
  cin>>n;
  for(int i=0;i<n;i++)
    scanf("%s",u[i]);

  cin>>m;
  for(int i=0;i<m;i++)
    scanf("%s",t[i]);

  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
      if(strcmp(t[i],u[j])==0){
	count++;
	if(count%2==1)
	  cout<<"Opened by "<<t[i]<<endl;
	else
	  cout<<"Closed by "<<t[i]<<endl;
	break;
      }
      else if(j==n-1)
	  cout<<"Unknown "<<t[i]<<endl;
  return 0;
}