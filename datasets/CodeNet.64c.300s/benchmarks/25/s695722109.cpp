#include<iostream>
using namespace std;
int main(){
	int a[4][2],b[4][2];
	while(cin >>a[0][0]>>a[1][0]>>a[2][0]>>a[3][0]){
		cin >>b[0][0]>>b[1][0]>>b[2][0]>>b[3][0];
		a[0][1] = a[1][1] = a[2][1] = a[3][1] = b[0][1] = b[1][1] = b[2][1] = b[3][1] = 1;
		int hit = 0,blow = 0;
		for(int i=0; i<4; i++){
			if(a[i][0] == b[i][0]){
				a[i][1] = 0;
				b[i][1] = 0;
				hit++;
			}
		}
		for(int i=0; i<4; i++){
			for(int l=0; l<4; l++){
				if(a[i][1] == 1 && b[l][1] == 1 && a[i][0] == b[l][0]){
					a[i][1] = 0;
					b[l][1] = 0;
					blow++;
				}
			}
		}
		cout<<hit<<" "<<blow<<endl;
	}
}