#include<iostream>
using namespace std;
 
int main()
{
 char c;
 int N,M,x,y,i,j,field[21][21],d;
 while(cin>>N,N){
  for(i=0;i<21;i++)for(j=0;j<21;j++)field[i][j]=0;
  while(N-->0){cin>>x>>y;field[y][x]=1;}
  cin>>M;
  x=y=10;
  while(M-->0){
   cin>>c>>d;
   while(d-->0){
    if(c=='N')y++;
    if(c=='S')y--;
    if(c=='E')x++;
    if(c=='W')x--;
    field[y][x]=0;
   }
  }
  d=0;
  for(i=0;i<21;i++)for(j=0;j<21;j++)d+=field[i][j];
  if(d)cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
 }
}