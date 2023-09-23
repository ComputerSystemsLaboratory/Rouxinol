#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdlib>

using namespace std;
int main(){

	int n;
	int field[21][21];
	while(cin>>n&&n!=0){
		memset(field,0,sizeof(field));
		for(int i = 0; i < n; i++){
			int x,y;
			cin>>x>>y;
			field[y][x]=1;
		}
		int m;
		cin>>m;
		int rx=10;
		int ry=10;
		int cnt=n;
		for(int i = 0; i < m; i++){
			char ch;
			int d;
			cin>>ch>>d;
			int ny=ry;
			int nx=rx;
			while(d){
				d--;
				if(ch=='W'){
					nx--;
					if(ny>=0&&nx>=0&&ny<=20&&nx<=20){
						if(field[ny][nx]){
							cnt--;
							field[ny][nx]=0;
						}
						ry=ny;
						rx=nx;
					}
				}
				else if(ch=='E'){
					nx++;
					if(ny>=0&&nx>=0&&ny<=20&&nx<=20){
						if(field[ny][nx]){
							cnt--;
							field[ny][nx]=0;
						}
						ry=ny;
						rx=nx;
						
					}
				}
				else if(ch=='N'){
					ny++;
					if(ny>=0&&nx>=0&&ny<=20&&nx<=20){
						if(field[ny][nx]){
							cnt--;
							field[ny][nx]=0;
						}
						ry=ny;
						rx=nx;
						
					}
				}
				else if(ch=='S'){
					ny--;
					if(ny>=0&&nx>=0&&ny<=20&&nx<=20){
						if(field[ny][nx]){
							cnt--;
							field[ny][nx]=0;
						}
						ry=ny;
						rx=nx;
						
					}
				}
			}
		}
		if(cnt==0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}

	return 0;
}