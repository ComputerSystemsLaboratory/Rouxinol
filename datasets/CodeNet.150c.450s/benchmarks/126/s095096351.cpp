#include<iostream>
using namespace std;
int main(){
  int h,w;
  int n;
  int x,y;
  int mas[20][20];
  int d[20][20];
  while(1){
    cin>>w>>h;
    if(w==0 && h==0) break;
    for(int i=0;i<=h;i++){
      for(int j=0;j<=w;j++){
	mas[i][j]=0;
	d[i][j]=0;
      }
    }
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>x>>y;
      mas[y][x]=1;
    }
    d[1][1]=1;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(mas[i+1][j+1]==0 && j+i!=0){
	  d[i+1][j+1]=d[i][j+1]+d[i+1][j];
	}
      }
    }
    cout<<d[h][w]<<endl;
  }
}