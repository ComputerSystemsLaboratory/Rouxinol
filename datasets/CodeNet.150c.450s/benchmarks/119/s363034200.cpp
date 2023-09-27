#include<iostream>
using namespace std;
int w,h,i,j,c[50][50];

void visit(int i,int j){

  if(i<0||j<0)return;
  if(i>=50||j>=50)return;

  c[i][j]=0;
  for(int k=-1;k<=1;k++)
    for(int l=-1;l<=1;l++)
      if(c[i+k][j+l]==1)
	visit(i+k,j+l);
     
}
int main(){
  int count;
  while(1){ 
    count=0;
    cin>>w>>h;
    if(w==0&&h==0)break; 
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
	cin>>c[i][j];
      }
    }
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
	if(c[i][j]==1){
	  count++;
	  visit(i,j);
	}
      }
    }
    cout<<count<<endl;
  }
  return 0;
}