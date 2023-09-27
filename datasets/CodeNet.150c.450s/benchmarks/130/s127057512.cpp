#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n=0,m=0;
	
	cin >> n >> m;
	int A[n+1][m+1];
	int b[m+1];
	int c[n+1];

//?????????
	for(int k=1;k<=m;k++){
		for(int i=1;i<=n;i++){
			A[i][k]=0;
		}
	}
	for(int k=1;k<=m;k++){
		b[k]=0;
	}
	for(int i=1;i<=n;i++){
		c[i]=0;
	}
	

	for(int i=1;i<=n;i++){
		for(int k=1;k<=m;k++){
			cin >> A[i][k];
		}
	}

	for(int i=1;i<=m;i++){
		cin >> b[i];
	}

	for(int i=1;i<=n;i++){
		for(int k=1;k<=m;k++){
			c[i] += A[i][k]*b[k];
		}
	}

//?¢??????¨
	// for(int i=1;i<=n;i++){
	// 	for(int k=1;k<=m;k++){
	// 		cout << A[i][k] << " ";
	// 	}
	// 	cout << endl;
	// }
	// for(int i=1;i<=n;i++){
	// 	cout << b[i] << endl;
	// }
	for(int i=1;i<=n;i++){
		cout << c[i] << endl;
	}




return 0;
}