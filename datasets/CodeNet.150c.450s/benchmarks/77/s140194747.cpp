#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	bool map[21][21];
	int px,py,N,x,y,M,dir;
	char c;
	while(cin>>N,N){
		int cnt=0;
		px=py=10;
		rep(i,21)rep(j,21)map[i][j]=false;
		rep(i,N){
			cin>>x>>y;
			map[y][x]=true;
		}
		cin>>M;
		rep(i,M){
			cin>>c>>dir;
			if(c=='E'){
				rep(j,dir){
					px++;
					if(map[py][px]){
						cnt++;
						map[py][px]=false;
					}
				}
			}else if(c=='N'){
				rep(j,dir){
					py++;
					if(map[py][px]){
						cnt++;
						map[py][px]=false;
					}
				}
			}else if(c=='W'){
				rep(j,dir){
					px--;
					if(map[py][px]){
						cnt++;
						map[py][px]=false;
					}
				}
			}else if(c=='S'){
				rep(j,dir){
					py--;
					if(map[py][px]){
						cnt++;
						map[py][px]=false;
					}
				}
			}
		}
		if(cnt==N)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}