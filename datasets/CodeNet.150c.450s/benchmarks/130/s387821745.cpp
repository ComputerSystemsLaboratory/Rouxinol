#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>


#define CI cin >>
#define CO cout <<
#define E << endl;
#define F(i,max) (for(int i = 0;i < max;++i))

using namespace std;


int main(void) {
	int m = 0;
	int n = 0;

	CI n >> m;

	vector<vector<int>> A(n, vector<int>(m, 0));
	vector<int> b(m, 0);
	vector<int> result(n, 0);

	for (int i = 0; i < n; i++) {		
		for (int j = 0; j < m; j++) {
			CI  A[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		CI b[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result[i] += A[i][j] * b[j];
		}
	}

	for (int i = 0; i < n; i++) {
		CO result[i] E
	}

}