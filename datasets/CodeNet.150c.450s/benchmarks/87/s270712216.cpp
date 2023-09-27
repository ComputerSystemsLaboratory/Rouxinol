#include <iostream>
using namespace std;
int main(){
  int h;
  while (cin>>h,h|h!=0){
    string temp;
    int board[h][6];
    for (int i=0;i<h;i++){
      cin>>board[i][0]>>board[i][1]>>board[i][2]>>board[i][3]>>board[i][4];
    }
    int num,count;
    int check=0;
    int score=0;
    while (1){
      check=score;
      for (int i=h-2;i>=0;i--){
	for (int j=0;j<5;j++){
	  for (int k=h-1;k>i;k--){
	    if (board[k][j]==0){
	      board[k][j]=board[i][j];
	      board[i][j]=0;
	      break;
	    }
	  }
	}
      }
      for (int i=0;i<h;i++){
	count=1;
	num=0;
	for (int j=0;j<5;j++){
	  if (board[i][j]==num){
	    count++;
	  }
	  else{
	    if (count>2)
	      break;
	    count=1;
	  }
	  num=board[i][j];
	}
	if (count<=2)
	  num=0;
	score=score+num*count;
	int ii=0;
	for (int j=0;j<5;j++){
	  if ((ii==count-1||j==4||board[i][j+1]==num)&&board[i][j]==num){
	    board[i][j]=0;
	    ii++;
	  }
	  if (ii==count)
	    break;
	}
      }
      /* for (int i=0;i<h;i++){
	for (int j=0;j<5;j++){
	  cout<<board[i][j]<<" ";
	}
	cout<<endl;
	}*/
      if (check==score){
	break;
      }
      // cout<<" "<<score<<endl;
    }

    cout<<score<<endl; 
  }
}