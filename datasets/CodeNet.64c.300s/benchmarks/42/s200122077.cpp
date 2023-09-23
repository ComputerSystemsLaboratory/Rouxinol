#include<iostream>

using namespace std;

#define NMAX 20

int main(){

	int M,N,l;
	int x[NMAX],y[NMAX];
	char d;
	bool ok[21][21];

	while(1){

		cin>>N;

		if(N==0) break;

		for(int i=0;i<N;i++){
			cin>>x[i]>>y[i];
		}

		cin>>M;
		int nx=10,ny=10;
		for(int i=0;i<21;i++){
			for(int j=0;j<21;j++){
				ok[i][j]=false;
			}
		}
		ok[10][10]=true;
		for(int i=0;i<M;i++){
			cin>>d>>l;
			for(int j=0;j<l;j++){
				if(d=='N') ny++;
				if(d=='S') ny--;
				if(d=='W') nx--;
				if(d=='E') nx++;
				ok[ny][nx]=true;
			}
		}
		bool f=true;
		for(int i=0;i<N;i++){
			if(!ok[y[i]][x[i]]) f=false;
		}
		if(f) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}