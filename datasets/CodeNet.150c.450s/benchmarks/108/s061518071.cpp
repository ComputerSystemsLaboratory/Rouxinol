#include <iostream>
#include <queue>
using namespace std;
int c[101][102],ch[101];
queue<int> q;

int main(){
  int a,b,e,d,n,k;
  cin>>a;
  for(int i=1;i<=a;i++)ch[i]=-1;
  for(int i=0;i<a;i++){
    cin>>b>>e;
    c[b][0]=e;
    for(int j=1;j<=e;j++){
      cin>>d;
      c[b][j]=d;
    }
  }
  q.push(1);
  ch[1]=0;
  while(q.size()){
    n=q.front();q.pop();
    for(int i=1;i<=c[n][0];i++){
      if(ch[c[n][i]]==-1){
	q.push(c[n][i]);
	ch[c[n][i]]=ch[n]+1;
      }
    }
  }
  for(int i=1;i<=a;i++)cout<<i<<" "<<ch[i]<<endl;

  return 0;
}