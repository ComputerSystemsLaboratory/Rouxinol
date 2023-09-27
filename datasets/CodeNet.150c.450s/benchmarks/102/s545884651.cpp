#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int check(int j){
	if (j==2 || j==4 ||j==3)
	return j;
	else
	return 3;
}
int main(){
	int board[22][22];
	int w,h;
	char t;
	while(1){
		cin >>w >>h;
		if(w==0 && h==0) break;
		for(int i=0;i<=21;i++){
			for(int j = 0;j<=21;j++){
				board[j][i]=4;
			}
		}//initialization
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				cin >> t ;
				if(t == '.')board[j][i] = 1;
				else if(t=='#')board[j][i]=2;
				else board[j][i] = 3;
			}
		}// input end
		int cmem = 2000;
		int c  = 0;
		while(cmem-c !=0){
				cmem = c;
			for(int i=1;i<=h;i++){
				for (int j= 1;j<=w;j++){
					if(board[j][i] ==3){
					board[j-1][i] =check(board[j-1][i]);
					board[j+1][i] =check(board[j+1][i]);
					board[j][i-1] =check(board[j][i-1]);
					board[j][i+1] =check(board[j][i+1]);
					}
				}
			}
			c = 0;
			for(int i=1;i<=h;i++){
				for (int j= 1;j<=w;j++){
					if (board[j][i] ==3) c+=1;
				}
			}
	
		}	
	
		cout <<c << endl;	
	}//while loop end
	return 0;
}