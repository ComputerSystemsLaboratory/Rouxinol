#include <iostream>
using namespace std;

void checkboard(void);
void startmove(void);
int checked(int i,int j);

char board[21][21];
int H,W,now[2];

int main(void){
	while(1){
		cin >> H >> W ;
		if (!H && !W) break;
		// count=0;
		for(int i=0;i<W;i++){
			for(int j=0;j<H;j++){
				cin >> board[i][j];
				if(board[i][j]=='@'){
					now[0]=i;
					now[1]=j;
				}
			}
		}
		startmove();
		checkboard();
	}

}


void startmove(void){
	int n;
	do{
		n=0;
		for(int i=0;i<W;i++){
			for(int j=0;j<H;j++){
				if(board[i][j]=='@')
					n+=checked(i,j);
			}
		}

	}while(n);
}

int checked(int i,int j){
	int a=0;
	if(i>0 && board[i-1][j]=='.'){
		board[i-1][j]='@';
		a=1;
	}
	if(i<W && board[i+1][j]=='.'){
		board[i+1][j]='@';
		a=1;
	}
	if(j>0 && board[i][j-1]=='.'){
		board[i][j-1]='@';
		a=1;
	}
	if(j<H && board[i][j+1]=='.'){
		board[i][j+1]='@';
		a=1;
	}
	// checkboard();
	return a;
}
void checkboard(void){
		int count=0;
		for(int i=0;i<W;i++){
			for(int j=0;j<H;j++){
				if(board[i][j]=='@') count++; 
				// cout << board[i][j];
			}
		}
			cout << count << endl;

}