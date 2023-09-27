#include<iostream>
#include<cstring>
using namespace std;
int x[21][21],cx,cy,n,m,a,b,c;char d;
int main(){
	while(true){
		memset(x,0,sizeof(x));
		cx=10;cy=10;
		cin>>n;if(!n){break;}
		for(int i=0;i<n;i++){cin>>a>>b;x[a][b]=1;}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>d>>c;
			if(d=='N'){
				for(int i=0;i<c;i++){
					cy++;
					if(x[cx][cy]==1){x[cx][cy]=0;}
				}
			}
			if(d=='S'){
				for(int i=0;i<c;i++){
					cy--;
					if(x[cx][cy]==1){x[cx][cy]=0;}
				}
			}
			if(d=='E'){
				for(int i=0;i<c;i++){
					cx++;
					if(x[cx][cy]==1){x[cx][cy]=0;}
				}
			}
			if(d=='W'){
				for(int i=0;i<c;i++){
					cx--;
					if(x[cx][cy]==1){x[cx][cy]=0;}
				}
			}
		}
		for(int i=0;i<=20;i++){
			for(int j=0;j<=20;j++){
				if(x[i][j]==1){
					goto E;
				}
			}
		}
		cout<<"Yes"<<endl;goto F;
E:;
		cout<<"No"<<endl;
F:;
	}
}