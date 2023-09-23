#include<iostream>
using namespace std;
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};

int N,M,a,b;
int t[30][30];

void init(){
  for(int i=0;i<30;i++)
    for(int j=0;j<30;j++)
      t[i][j]=0;
}
int main(){
  while(1){
    cin>>N;
    if(N==0)break;
    init();
    for(int i=0;i<N;i++){
      cin>>a>>b;
      t[b][a]=1;
    }
    cin>>M;
    int y=10,x=10,ans=0;
    for(int i=0;i<M;i++){
      char ch;
      cin>>ch>>a;
      if(ch=='N')b=2;
      if(ch=='S')b=0;
      if(ch=='E')b=1;
      if(ch=='W')b=3;
      for(int j=0;j<a;j++){
	y+=dy[b];
	x+=dx[b];
	if(t[y][x])ans++,t[y][x]=0;
      }
    }
    cout<<(N==ans?"Yes":"No")<<endl;
  }
  return 0;
}