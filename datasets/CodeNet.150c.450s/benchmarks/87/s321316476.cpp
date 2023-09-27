#include<bits/stdc++.h>
using namespace std;
int main(){
	int H;
	while(cin>>H,H){
		int W = 5;
		int fi[20][20];
		for(int i = 0;i < H;i++){
			for(int j = 0;j < W;j++){
				cin>>fi[i][j];
			}
		}
		int sc = 0;
		int D = 10;
		int p = 0;
		while(D--){
			bool er[20][20] = {};
			for(int i = 0;i < H;i++){
				for(int j = 1;j < W - 1;j++){
					if(fi[i][j-1] == fi[i][j] && fi[i][j] == fi[i][j+1]){
						er[i][j] = true;
						er[i][j-1] = true;
						er[i][j+1] = true;
					}
				}
				for(int j = 0;j < W;j++){
					if(er[i][j]){
						p += fi[i][j];
						fi[i][j] = 0;
					}
				}
			}
			int h = H+5;
			while(h--){
				for(int i = H - 1;i > 0;i--){
					for(int j = 0;j < W;j++){
						if(fi[i][j] == 0){
							swap(fi[i][j],fi[i-1][j]);
						}
					}
				}
			}/*
			cout<<"***"<<endl;
			for(int i = 0;i < H;i++){
				for(int j = 0;j < W;j++){
					cout<<fi[i][j];
				}
				cout<<endl;
			}*/
		}
		cout<<p<<endl;
	}
}