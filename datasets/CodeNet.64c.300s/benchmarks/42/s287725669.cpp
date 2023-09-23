#include <bits/stdc++.h>
using namespace std;
bool field[32][32];
const string dic="NESW";
const int dx[]={0,1,0,-1};
const int dy[]={1,0,-1,0};
int main(){
	while(true){
		int n;	cin>>n;
		if(n==0)	return 0;
		for(int i=0;i<32;i++)	for(int j=0;j<32;j++)	field[i][j]=false;
		for(int i=0;i<n;i++){
			int x,y;	cin>>x>>y;
			field[y][x]=true;
		}
		int m;	cin>>m;
		int cx=10,cy=10;
		for(int i=0;i<m;i++){
			char d;	int l;	cin>>d>>l;
			for(int j=0;j<4;j++){
				if(dic[j]==d){
					for(int k=0;k<l;k++){
						cx+=dx[j];
						cy+=dy[j];
						if(field[cy][cx]){
							n--;
							field[cy][cx]=false;
						}
					}
					break;
				}
			}
		}
		if(n==0)	cout<<"Yes"<<endl;
		else 	cout<<"No"<<endl;
	}
}