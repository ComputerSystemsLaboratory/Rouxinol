#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;


int field[10][6];
int height[5];
int H;


int del(){
	int score=0;
	rep(y,H){
		int seq=0;
		int prev=0;
		rep(x,6){
			if(prev==field[y][x]){
				seq++;
			}else{
				if(3<=seq){
					for(int i=1;i<=seq;i++){
						score+=field[y][x-i];
						field[y][x-i]=0;
					}
				}
				seq=1;
				prev=field[y][x];
			}
		}
	}
	return score;
}
void fall(){
	memset(height,0,sizeof(height));
	rep(y,H){
		rep(x,5){
			if(field[y][x]==0)continue;
			if(y!=height[x]){
				field[height[x]][x]=field[y][x];
				field[y][x]=0;
			}
			height[x]++;
		}
	}
}


int main(){
	while(cin>>H&&H){
		for(int y=H-1;y>=0;y--)
			for(int x=0;x<5;x++)cin>>field[y][x];
		int ans=0,t;

		while(t=del()){
			ans+=t;
			fall();
		}
		cout<<ans<<endl;
	}

	return 0;
}