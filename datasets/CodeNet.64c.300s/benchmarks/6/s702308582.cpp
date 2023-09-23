#include<iostream>
using namespace std;

int main(){
	int tower[4][3][10];
	int n;
	int b,f,r,v;
	for(int a=0;a<4;a++){
		for(int b=0;b<3;b++){
			for(int c=0; c<10;c++){
				tower[a][b][c]=0;
				}
			}
		}
		
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> b >> f >> r >> v;
		tower[b-1][f-1][r-1] += v;
		}
	for(int a=0;a<4;a++){
		for(int b=0;b<3;b++){
			for(int c=0;c<10;c++){
				cout << " "<<tower[a][b][c];
				}
			cout << endl;
			}
		if (a!=3) {for(int d=0;d<20;d++){cout << "#";}cout<<"\n";}
		
		}
		
	return 0;
}