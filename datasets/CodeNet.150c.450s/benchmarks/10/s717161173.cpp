#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int b[n],f[n],r[n],v[n];
	int b1[3][10] = {0},b2[3][10] = {0},b3[3][10] = {0},b4[3][10] = {0};
		
	for(int i = 0;i < n;i++){
		cin >> b[i] >> f[i] >> r[i] >> v[i];
		switch (b[i]){
			case 1: b1[f[i] - 1][r[i] - 1] += v[i]; break;
			case 2: b2[f[i] - 1][r[i] - 1] += v[i]; break;
			case 3: b3[f[i] - 1][r[i] - 1] += v[i]; break;
			case 4: b4[f[i] - 1][r[i] - 1] += v[i]; break;
		}
	}
	
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 10;j++){
			cout << " " << b1[i][j];
		}
		cout << endl;
	}
	
	cout << "####################" << endl;
	
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 10;j++){
			cout << " " << b2[i][j];
		}
		cout << endl;
	}
	
	cout << "####################" << endl;
	
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 10;j++){
			cout << " " << b3[i][j];
		}
		cout << endl;
	}
	
	cout << "####################" << endl;
	
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 10;j++){
			cout << " " << b4[i][j];
		}
		cout << endl;
	}
	
	return 0;
}