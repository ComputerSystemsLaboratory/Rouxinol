#include<iostream>
using namespace std;
#define MAX 16
int a,b,n,x,y,cnt;
bool field[MAX][MAX];
void rec(int x,int y)
{
  if(field[x][y]==false)return;
  if(x==a-1&&y==b-1){
    cnt++;
    return;
  }
  if(x+1<a)rec(x+1,y);
  if(y+1<b)rec(x,y+1);
  return;
}
int main()
{
  int i,j;
  while(cin>>a>>b>>n,a|b){
    for(i=0;i<a;i++)for(j=0;j<b;j++)field[i][j]=true;
    while(n-->0){
      cin>>x>>y;
      field[x-1][y-1]=false;
    }
    cnt=0;
    rec(0,0);
    cout<<cnt<<endl;
  }
}