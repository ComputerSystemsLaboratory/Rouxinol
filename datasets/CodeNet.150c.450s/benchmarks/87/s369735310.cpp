#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int board[10][5];

int main(){ _;
  int h;
  while(cin>>h,h!=0){
    REP(i,10)REP(j,5)board[i][j]=0;
    REP(i,h){
      REP(j,5){
	cin>>board[h-i-1][j];
      }
    }
    int sum=0;
    bool chain=false;
    do{
      chain=false;
      REP(i,h){
	REP(j,3){
	  if(board[i][j]==0)continue;
	  int k=j+1;
	  for(;k<5;k++){
	    if(board[i][j]!=board[i][k])break;
	  }
	  if(k-j>=3){
	    sum+=board[i][j]*(k-j);
	    for(;j<k;j++)
	      board[i][j]=0;
	    break;
	  }
	}
      }
      REP(j,5){
	REP(i,h-1){
	  if(board[i][j]==0){
	    int k=i+1;
	    for(;k<10;k++){
	      if(board[k][j]!=0){
		board[i][j]=board[k][j];
		board[k][j]=0;
		chain=true;
		break;
	      }
	    }
	  }
	}
      }
      // REP(i,10){
      // 	REP(j,5)
      // 	  cout<<board[i][j]<<" ";
      // 	cout<<endl;
      // }
      // cout<<endl;
    }while(chain);
    cout<<sum<<endl;
  }
}