#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main(){
	char h;
	int n,m,c;
	while(cin>>n,n){
		bool jewel[21][21];
		memset(jewel,false,sizeof(jewel));
		int x=10,y=10;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			jewel[a][b]=true;
		}
		int cnt=0;
		cin>>m;
		for(int j=0;j<m;j++){
			cin>>h>>c;
			if(h=='N'){
				for(int i=0;i<c;i++){
					y++;
					if(jewel[x][y]){
						cnt++;
						jewel[x][y]=false;
					}
				}
			}else if(h=='S'){
				for(int i=0;i<c;i++){
					y--;
					if(jewel[x][y]){
						cnt++;
						jewel[x][y]=false;
					}
				}
			}else if(h=='E'){
				for(int i=0;i<c;i++){
					x++;
					if(jewel[x][y]){
						cnt++;
						jewel[x][y]=false;
					}
				}
			}else{
				for(int i=0;i<c;i++){
					x--;
					if(jewel[x][y]){
						cnt++;
						jewel[x][y]=false;
					}
				}
			}
		}
		if(cnt==n){
			cout<<"Yes"<<endl;
		}else cout<<"No"<<endl;
	}
}