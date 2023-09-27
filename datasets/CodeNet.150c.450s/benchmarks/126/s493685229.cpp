#include<iostream>
using namespace std;
int t[100][100],h,w,n;
void init(){
  for(int i=0;i<100;i++)
    for(int j=0;j<100;j++)
      t[i][j]=0;
  t[0][1]=1;
}
int main(){
  while(cin>>h>>w&&h&&w){
    cin>>n;
    init();
    for(int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      t[a][b]=-1;
    }
    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
	if(t[i][j]==-1){t[i][j]=0;continue;}
	t[i][j]+=t[i-1][j];
	t[i][j]+=t[i][j-1];
      }
    }
    cout<<t[h][w]<<endl;
  }
  return 0;
}