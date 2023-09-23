#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	int r, c, b;
	int Wsum=0, Hsum=0, Asum=0;
	cin >> r >> c;
		for(int i=0; i<100; i++){
			for(int j=0; j<100; j++){
				a[i][j]=0;
			}
		}
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cin >> b;
				a[i][j]=b;
				cout << a[i][j] << " ";
				Wsum += a[i][j];
			}
			cout << Wsum << endl;
			Asum +=  Wsum;
			Wsum = 0;
		}
		for(int i=0; i<c; i++){
			for(int j=0; j<r; j++){
				Hsum += a[j][i];
			}
			cout << Hsum << " ";
			Hsum = 0;
		}
		cout << Asum << endl;
}

