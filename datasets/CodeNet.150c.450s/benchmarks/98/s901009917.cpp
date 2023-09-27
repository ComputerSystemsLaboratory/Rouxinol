#include<iostream>
using namespace std;
 
int n,m,s[2][100];
 
int calc(int x, int y)
{
int s1,s2,i;
s1=s2=0;
for(i=0;i<n;i++)
 if(i==x)s1+=s[1][y];
 else s1+=s[0][i];
for(i=0;i<m;i++)
 if(i==y)s2+=s[0][x];
 else s2+=s[1][i];
if(s1==s2)return s[0][x]+s[1][y];
else return -1;
}
 
int main()
{
while(cin>>n>>m,n|m){
int i,j,t,x,y;
bool f;
for(i=0;i<n;i++)cin>>s[0][i];
for(j=0;j<m;j++)cin>>s[1][j];
f=1;
for(i=0;i<n;i++)for(j=0;j<m;j++){
 t=calc(i,j);
 if(t!=-1){
  if(f){x=i;y=j;f=0;}
  else if(t<s[0][x]+s[1][y]){x=i;y=j;}
 }
}
if(f)cout<<"-1"<<endl;
else cout<<s[0][x]<<" "<<s[1][y]<<endl;
}
}