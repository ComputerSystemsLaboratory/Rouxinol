#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int N,M,x,y,s;
	int gem[21][21];
	int px,py;
	char v;
	while(1){

		cin >> N ;
		if (N == 0) break;
		for(int i=0;i<21;i++){
			for(int j=0;j<21;j++){
				gem[i][j]=0;
			}
		}
		for(int i=0;i<N;i++){
			cin >>x >>y;
			gem[x][y] = 1;
		}
		cin >> M;
		px = 10;
		py = 10;
		int gemc= N ;
		for(int j=0;j<M;j++){
			cin >> v >> s;
			if (v =='E'){
			for(int i=0;i<s;i++){
				px +=1;
				if(gem[px][py]==1){
					gem[px][py] =0;
					gemc -=1;
				}
			}
			}
			else if (v =='W'){
			for(int i=0;i<s;i++){
				px -=1;
				if(gem[px][py]==1){
					gem[px][py] =0;
					gemc -=1;
				}
			}
			}
			else if (v =='N'){
			for(int i=0;i<s;i++){
				py +=1;
				if(gem[px][py]==1){
					gem[px][py] =0;
					gemc -=1;
				}
			}
			}
			else {
			for(int i=0;i<s;i++){
				py -=1;
				if(gem[px][py]==1){
					gem[px][py] =0;
					gemc -=1;
				}
			}
			}
		}
		if(gemc!=0)cout << "No" <<endl;
		else cout << "Yes" <<endl;

	}
	return 0;
}