#include<bits/stdc++.h>
#define REP(i,s,n) for(int i=s ; i < n ; i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int field[10][5];
int cnt;

void Connect_Num(int y,int x){
  
  cnt++;
  
  if( x+1 < 5 && field[y][x] == field[y][x+1]){
    Connect_Num(y,x+1);
  }
  
}
void Del(int y,int x,int n){
  
  rep(i,n){
    for(int j=y ; j > 0 ; j--){
      field[j][x+i]=field[j-1][x+i];
    }
    field[0][x+i]=0;
  }
  
}
int main(){
  
  int h;
  
  while(1){
    
    cin >>h;
    if(h==0)break;
    
    rep(i,h){
      rep(j,5){
	cin >>field[i][j];
      }
    }
    
    int score=0;
    
    while(1){
      bool flag=true;
      rep(i,h){
	rep(j,5){
	  if(field[i][j] != 0){
	    cnt=0;
	    Connect_Num(i,j);
	    if(cnt >=3){
	      score+=cnt*field[i][j];
	      Del(i,j,cnt);
	      j+=cnt;
	      flag=false;
	    }
	  }
	}
      }
      if(flag)break;
    }
    
    cout <<score<<endl;
  
  }
  
  return 0;
}