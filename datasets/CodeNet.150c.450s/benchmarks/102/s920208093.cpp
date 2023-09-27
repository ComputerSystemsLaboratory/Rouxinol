#include<iostream>
#include<string>
using namespace std;

int i,j,w,h;
string tile[21];
int cnt=0;
int result=0;
int si,sj;

void rec(int i,int j){
  if(tile[i][j]=='.'){
    tile[i][j]='#';
    cnt++;
  }

  if(i+1 < h && tile[i+1][j]=='.')  rec(i+1,j);
  if(j+1 <w && tile[i][j+1]=='.')  rec(i,j+1);
  if(j-1 >=0 && tile[i][j-1]=='.')  rec(i,j-1);
  if(i-1 >=0 && tile[i-1][j]=='.' )  rec(i-1,j);
}

int main(){

  while(1){
    cnt=0;
    result=0;
  cin >> w >> h;
  if(w==0 && h==0)break;
  for(i = 0; i < h; i++){
    cin >> tile[i];
    for(j = 0; j < w; j++){
     
      if(tile[i][j]=='@'){
	si=i;
	sj=j;
      }
    }
  }
 
  rec(si,sj);
 
 
  cout << cnt+1 << endl;
  }
  return 0;
}