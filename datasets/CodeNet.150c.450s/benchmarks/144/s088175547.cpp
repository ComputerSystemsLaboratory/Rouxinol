#include <iostream>
using namespace std;

int main(void){
	int n, m, l, a[101][101], b[101][101];
	long long ans[101][101]={0};
	cin >>n >>m >>l;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >>a[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<l; j++){
			cin >>b[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			for(int k=0; k<l; k++){
				ans[i][k]+=a[i][j]*b[j][k];
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<l-1; j++){
			cout <<ans[i][j] <<" ";
		}
		cout <<ans[i][l-1] <<endl;
	}
    return 0;
}