#include <iostream>
using namespace std;
int main(){
  int box[101][101]={};
  int r,c,x,y,v;
  cin>>r>>c;
  for(y=0;y<r;y++){
    for(x=0;x<c;x++){
      cin>>v;
      box[y][x]=v;
      box[y][c]=box[y][c]+v;
    }
  }
  for(x=0;x<c;x++){
    for(y=0;y<r;y++){
      box[r][x]=box[r][x]+box[y][x];
    }
  }
  for(x=0;x<c;x++){
    box[r][c]=box[r][c]+box[r][x];
  }
  for(y=0;y<=r;y++){
    for(x=0;x<=c;x++){
      if(x<c){
	cout<<box[y][x]<<" ";
      }
      if(x==c){
	cout<<box[y][c]<<endl;
      }
    }
  }
  return 0;
}