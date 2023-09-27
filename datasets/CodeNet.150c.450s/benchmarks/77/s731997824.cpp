#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		int m,count=n,p[21][21];
		for(int i=0;i<21;++i)for(int j=0;j<21;++j)p[i][j]=0;
		for(int i=0,x,y;i<n;++i){
			cin>>x>>y;
			p[x][y]=1;
		}
		cin>>m;
		for(int i=0,d,cx=10,cy=10;i<m;++i){
			string s;
			cin>>s;
			cin>>d;
			if(s=="N"){
				for(int j=0;j<d;++j){
					++cy;
					if(p[cx][cy]==1){
						count--;
						p[cx][cy]=0;
					}
				}
			}else if(s=="E"){
				for(int j=0;j<d;++j){
					++cx;
					if(p[cx][cy]==1){
						count--;
						p[cx][cy]=0;
					}
				}
			}else if(s=="S"){
				for(int j=0;j<d;++j){
					--cy;
					if(p[cx][cy]==1){
						count--;
						p[cx][cy]=0;
					}
				}
			}else if(s=="W"){
				for(int j=0;j<d;++j){
					--cx;
					if(p[cx][cy]==1){
						count--;
						p[cx][cy]=0;
					}
				}
			}
		}
		if(count==0)cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}