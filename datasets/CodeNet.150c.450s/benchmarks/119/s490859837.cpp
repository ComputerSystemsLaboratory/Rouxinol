#include<iostream>
using namespace std;
int w,h,i,j;
int map[52][52];

void rec(int i,int j){
 
  if(map[i][j]==0)return;
  map[i][j]=0;
  rec(i+1,j);
  rec(i-1,j);
  rec(i,j-1);
  rec(i,j+1);
  rec(i-1,j-1);
  rec(i-1,j+1);
  rec(i+1,j-1);
  rec(i+1,j+1);
}
int main(){
  
  
  while(1){
    cin >> w >> h;
    if(w==0 && h==0)break;
    
    for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
	cin >> map[i][j];
	
      }
    }
    int count=0;
    for(int k=1;k<=h;k++){
      for(int l=1;l<=w;l++){
	if(map[k][l]==1){
	  count++;
	  rec(k,l);
	}
      }
    }
    cout << count << endl;
  }
  
  return 0;
}