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

int check[H][W];

void docheck(){
	rep(i,H)rep(j,W)check[i][j]=0;
	
	rep(i,h){
		rep(j,W-2){
			bool hit = true;
			rep(k,3){
				if(board[i][j+k] != board[i][j])hit=false;
			}
			if(hit){
				rep(k,3)check[i][j+k]=1;
			}
		}
	}
}

int del(){
	int ans= 0;
	rep(i,h){
		rep(j,W){
			if(check[i][j]==1){
				ans += board[i][j];
				board[i][j]=0;
			}
		}
	}
	return ans;
}

void tsume(){
	rep(i,h){
		reps(j,1,h){
			rep(k,W){
				if(board[j][k]==0){
					swap(board[j-1][k], board[j][k]);
				}
			}
		}
	}
}

void print(){
	rep(i,h){
		rep(j,W)printf("%d ",board[i][j]);puts("");
	}
}

void solve(){
	int ans = 0;
	while(1){
		
		docheck();
		
		int val = del();
		ans += val;
		if(val==0)break;
		
		tsume();
		
		//print();puts("");
	}
	cout<<ans<<endl;
}

int main(){
	while(input())solve();
}