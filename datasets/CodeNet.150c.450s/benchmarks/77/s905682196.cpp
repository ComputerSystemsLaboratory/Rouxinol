#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m,l,x,y;
	string s;
	while(cin>>n,n){
		int d[21][21]={};
		int f=0,dx=10,dy=10;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			d[x][y]=1;
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>s>>l;
			for(int j=0;j<l;j++){
				if(s=="N")
				dy++;
				if(s=="S")
				dy--;
				if(s=="E")
				dx++;
				if(s=="W")
				dx--;
				if(d[dx][dy]==1)
				d[dx][dy]=0;
			}
		}
		for(int i=0;i<=20;i++){
			for(int j=0;j<=20;j++){
				if(d[i][j]==1)
				f=1;
			}
		}
		if(f==1)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
	}
	return 0;
}