#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n, b, f, r,v;
	int R[5][4][11];
	cin >> n;
	for(int i=1 ;i<5; i++){
		for(int j=1 ;j<4; j++){
			for(int k=1 ;k<11; k++){
				R[i][j][k]=0;
			}
		}
	}
	for(int l=0 ;l<n; l++){
	    cin >> b >> f >>r >>v;
		R[b][f][r]+=v;
	}
	for(int i=1 ;i<5; i++){
		for(int j=1 ;j<4; j++){
			for(int k=1 ;k<11; k++){
				cout <<" "<< R[i][j][k];
				if(k==10){
					cout << endl;
					if(j==3){
						if(i==1||i==2||i==3){
						cout << "####################" << endl;
					    }
					}
			    }
			}
		}
	}
	return 0;
}