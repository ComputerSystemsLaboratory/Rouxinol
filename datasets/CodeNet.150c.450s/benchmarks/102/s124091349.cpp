#include<iostream>
#include<string>
using namespace std;

char map[20][20];
int W,H;
int cnt;

void fac(int y,int x){
  map[y][x]='#';
  cnt++;
  
  if(map[y+1][x]=='.' && y < H-1)
    fac(y+1,x);
  if(map[y-1][x]=='.' && y > 0)
    fac(y-1,x);
  if(map[y][x+1]=='.' && x < W-1)
    fac(y,x+1);
  if(map[y][x-1]=='.' && x > 0)
    fac(y,x-1);  
}

int main(){
  int i,j;
  int x,y;

  while(1){
    cin >> W >> H;

    if(W+H==0)
      break;
    
    for(i=0;i<H;i++){
      for(j=0;j<W;j++){
	cin >> map[i][j];
	if(map[i][j]=='@'){
	  x=j; y=i; 
	} //@position      
      }
    }
    
    cnt=0;
    fac(y,x); //release cnt
    cout << cnt << endl;
  }
  return 0;
}