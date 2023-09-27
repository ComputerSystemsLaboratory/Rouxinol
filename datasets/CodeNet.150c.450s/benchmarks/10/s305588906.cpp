#include<iostream>
using namespace std;
int main()
{
	int n, b[512], f[512], r[512], v[512];
	int j[4][3][10] = { 0 };
	int a=0;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> b[i] >> f[i] >> r[i] >> v[i];
	}
	for (int i = 0; i < n; i++){
		j[b[i]-1][f[i]-1][r[i]-1]+=v[i];
	}
	for (int i = 0; i < 4; i++){
		if (a)cout << "####################" << endl;
		for (int n = 0; n < 3; n++){
			for (int k = 0; k < 10; k++){
				cout<<" "<<j[i][n][k];
			}
			cout << endl;
			a = 1;
		}
	}
	return 0;
}