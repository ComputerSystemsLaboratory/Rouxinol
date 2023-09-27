#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)
#define pb push_back


const int H = 11;
const int W = 5;
int h;
int board[H][W];

bool input(){
	cin>>h;
	if(h==0)return false;
	
	rep(i,H)rep(j,W)board[i][j]=0;
	rep(i,h){
		rep(j,W)cin>>board[i][j];
	}
	return true;
}


int dela[H][W];

void calc_del(){
	rep(i,H)rep(j,W)dela[i][j]=0;
	rep(i,h){
		rep(j,W-2){
			int num = board[i][j];
			bool hit = true;
			rep(k,3){
				if(board[i][j+k]!=num)hit=false;
			}
			if(hit){
				rep(k,3)dela[i][j+k]=1;
			}
		}
	}
}

int del(){
	int ans = 0;
	rep(i,H){
		rep(j,W){
			if(dela[i][j]==1){
				ans += board[i][j];
				board[i][j]=0;
			}
		}
	}
	return ans;
}

void tume(){
	rep(i,h){
		for(int i=h-1;i>=1;i--){
			rep(j,W){
				if(board[i][j]==0){
					swap(board[i][j], board[i-1][j]);
				}
			}
		}
	}
}

void print(){
	rep(i,h){
		rep(j,W){
			printf("%d ",board[i][j]);
		}puts("");
	}
}

void solve(){
	int ans= 0;
	while(1){
		//print();puts("");
		
		calc_del();
		int val = del();
		ans += val;
		if(val==0)break;
		tume();
		
	}
	cout<<ans<<endl;
}

int main(){
	while(input())solve();
}