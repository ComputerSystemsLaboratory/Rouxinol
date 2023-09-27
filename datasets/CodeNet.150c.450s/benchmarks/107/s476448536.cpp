#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  char s1[1001],s2[1001];
  int ss[1002][1002],u;

  cin>>s1>>s2;

  for(int i=0;i<=strlen(s2)+1;i++)ss[i][0]=i;
  for(int i=1;i<=strlen(s1)+1;i++)ss[0][i]=i;

  for(int i=1;i<=strlen(s2);i++){
    for(int j=1;j<=strlen(s1);j++){
      if(s1[j-1]==s2[i-1]){
	u=min(ss[i-1][j-1],ss[i-1][j]+1);
	ss[i][j]=min(u,ss[i][j-1]+1);
      }
      else{
	u=min(ss[i-1][j-1],ss[i-1][j]);
	ss[i][j]=min(u,ss[i][j-1])+1;
      } 
    }
  }
  cout<<ss[strlen(s2)][strlen(s1)]<<endl;
  return 0;
}