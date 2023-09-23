#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[4][3][10],b,c,d,e;
	cin>>n;
	for(int x=0;x<4;x++) for(int y=0;y<3;y++) for(int z=0;z<10;z++) a[x][y][z]=0;
	for(int i=0;i<n;i++){
		cin>>b>>c>>d>>e;
		a[b-1][c-1][d-1]+=e;
	}
	for(int x=0;x<4;x++){
		for(int y=0;y<3;y++){
			for(int z=0;z<10;z++) cout<<" "<<a[x][y][z];
			cout<<endl;
		}
		if(x<3) cout<<"####################"<<endl;
	}
	return 0;
}