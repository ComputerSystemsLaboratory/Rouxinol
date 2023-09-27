#include <iostream>
using namespace std;

int main(void){
	int r, c, a[101][101], sum_r=0, sum_c=0, sum_all=0;
	cin >>r >>c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >>a[i][j];
			cout <<a[i][j] <<" ";
			sum_r+=a[i][j];
			sum_all+=a[i][j];
		}
		cout <<sum_r <<endl;
		sum_r=0;
	}
	for(int j=0; j<c; j++){
		for(int i=0; i<r; i++){
			sum_c+=a[i][j];
		}
		cout <<sum_c <<" ";
		sum_c=0;
	}
	cout <<sum_all <<endl;
    return 0;
}