#include <iostream>

using namespace std;

int main (){
	int n;
	int m;
	cin>>n>>m;
	int MATR[n][m];
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin>>MATR[i][j];
	int vector[m];
	for(int i=0; i<m; i++)
		cin>>vector[i];
		
	for(int i=0; i<n; i++){
		int res=0;
		for (int j=0; j<m; j++){
		res+=MATR[i][j]*vector[j];
		}
	cout<<res<<endl;
	}
}
