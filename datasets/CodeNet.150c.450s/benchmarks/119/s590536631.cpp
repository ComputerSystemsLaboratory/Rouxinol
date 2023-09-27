#include<bits/stdc++.h>
using namespace std;

int a[100][100]={};

void del(int x,int y){
  a[x][y]=0;
  for(int i=-1;i<=1;i++){
    for(int t=-1;t<=1;t++){
      if(a[x+i][y+t]==1){del(x+i,y+t);}
    }}
}

int main(){

  while(1){
    
    int w,h;
  cin>>w>>h;
  if(w==0 && h==0){break;}

  for(int i=1;i<=h;i++){
    for(int t=1;t<=w;t++){
      cin>>a[i][t];
    }}

  int count=0;
  for(int i=1;i<=h;i++){
    for(int t=1;t<=w;t++){
      if(a[i][t]==1){del(i,t); count++;}
    }}
  
  cout<<count<<endl;
  }
  
  return 0;
}

