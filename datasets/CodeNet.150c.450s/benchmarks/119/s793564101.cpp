#include<iostream>
using namespace std;
void b(int ,int );
int a[100][100]={};
 
int main(){
  while(1){
    int count=0,w,h;
    cin>>w>>h;
    if(w+h==0)break;
     
    for(int i=1;i<=h;i++)
      for(int j=1;j<=w;j++)
    cin>>a[i][j];
 
    for(int i=1;i<=h;i++)
      for(int j=1;j<=w;j++)
    if(a[i][j]==1){
      b(j,i);
      count++;
    }
    cout<<count<<endl;  
  }
  return 0;
}
 
  void b(int x,int y){
    a[y][x]=0;
    int x1,y1;
    int x2[8]={-1,0,1,1,1,0,-1,-1};
    int y2[8]={1,1,1,0,-1,-1,-1,0};
    for(int k=0;k<8;k++){
    x1=x+x2[k];
    y1=y+y2[k];
    if(a[y1][x1]==1)
      b(x1,y1);
    }
  }