#include<iostream>
#include<algorithm>
using namespace std;

int R,C,senbei[10000][10],f[10],num;

void rec(int);
int count();

int main()
{
  int i,j;
  while(cin>>R>>C,R|C){
    for(j=0;j<R;j++)for(i=0;i<C;i++)cin>>senbei[i][j];
    rec(0);
    cout<<num<<endl;
  }
}

void rec(int k)
{
  if(k==R){
    num=max(num,count());
    return;
  }
  f[k]=0;
  rec(k+1);
  f[k]=1;
  rec(k+1);
}

int count()
{
  int n=0,i,j;
  for(i=0;i<C;i++){
    int cnt=0;
    for(j=0;j<R;j++)cnt+=senbei[i][j]^f[j];
    n+=max(cnt,R-cnt);
  }
  return n;
}