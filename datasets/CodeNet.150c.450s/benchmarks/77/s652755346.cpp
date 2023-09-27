#include<iostream>
#define REP(i,s,n) for(int i=s ; i < n ; i++) 
#define rep(i,n) REP(i,0,n)
using namespace std;
int main(){

  int N,M,x,y,l;
  int field[21][21];
  char d;

  while(1){
    
    cin >>N;
    if(N == 0)break;

    rep(i,21){
      rep(j,21){
      field[i][j]=0;
      }
    }
    
    rep(i,N){
      cin >>x>>y;
      field[y][x]=1;
    } 

    cin >>M;
    
    int cnt=0;
    x=10,y=10;

    rep(i,M){
      cin >>d>>l;
      rep(j,l){
	
	if(field[y][x] == 1){
	  cnt++;
	  field[y][x]=0;
	}
     
	if(d == 'N'){
	  y++;
	}else if(d == 'E'){
	  x++;
	}else if(d == 'S'){
	  y--;
	}else{
	  x--;
	}
	
      }

      if(field[y][x] == 1){
	cnt++;
	field[y][x]=0;
      }
      
    }

    if(cnt == N){
      cout <<"Yes"<<endl;
    }else{
      cout <<"No"<<endl;
    }
  
  }
  return 0;
}
  