#include<bits/stdc++.h>
using namespace std;
int a[500][500];
void calc(int i,int j){
  if(a[i][j]==1){
    a[i][j]=2;
    calc(i+1,j);
    calc(i,j+1);
    calc(i+1,j+1);
    calc(i+1,j-1);
    calc(i-1,j);
    calc(i,j-1);
    calc(i-1,j-1);
    calc(i-1,j+1);
  }
  else return;
}

int main(){
  while(1){
    int w,h;
    cin>>w>>h;
    if(w==0&&h==0) break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>a[i][j];
      }
    }
    int count=0;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(a[i][j]==1){
	  count++;
	  calc(i,j);
	}
      }
    }
    cout<<count<<endl;
  }
  return 0;
}

