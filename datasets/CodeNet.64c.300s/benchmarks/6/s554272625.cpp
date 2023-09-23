#include <iostream>
using namespace std;

int main(void){
	int b, f, r, v, n;
	int a[5][4][11]={0};
    cin >> n;
    for(int i=1; i<=n;i++){
		cin >>b >>f >>r >>v;
		a[b][f][r]+=v;
    }
    for(int i=1; i<5; i++){
		for(int j=1; j<4; j++){
			for(int k=1; k<11; k++){
				cout <<" " <<a[i][j][k];
			}
			cout <<endl;
		}
		if(i!=4){
			cout <<"####################" <<endl;
		}
    }
    return 0;
}