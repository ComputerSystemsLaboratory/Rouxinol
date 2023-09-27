#include<iostream>
#include<cstdio>
using namespace std;
int tile(int i,int j);
char memo[22][22];
int w,h;
int ii,jj;

int main(){
  while(1){
    cin >> w >> h;
    if(w==0&&h==0)break;
    for(int i=0;i<h;i++){
      cin >> memo[i];
      for(int j=0;j<w;j++){
	if(memo[i][j]=='@'){
	  ii=i;
	  jj=j;
	}
      }
    }
    int c=tile(ii,jj);
    cout << c << endl;
  }
}

int tile(int i,int j){
  if(i>=h||j>=w||i<0||j<0)return 0;
  if(memo[i][j]=='#') return 0;
  memo[i][j]='#';
  int ret=0;
  ret+=tile(i,j-1);
  ret+=tile(i,j+1);
  ret+=tile(i-1,j);
  ret+=tile(i+1,j);
  return ret+1;
}