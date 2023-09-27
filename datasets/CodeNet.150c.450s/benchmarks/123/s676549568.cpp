#include<stdio.h>
#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;

int solve(int m){

	if (m == 2){
		//printf("?´???°??§???%d\n",m);
		return 1;
	}
	if (m < 2 || m % 2 == 0) return 0;
	int e = 0;
	for (int j = 3; j<=sqrt(m); j++){
		if (m%j == 0){
			return 0;
		}
	}

	if (e == 0){
		//printf("?´???°??§???%d\n", m);
		return 1;
	}

}


int main(){



	int n;
	int p = 0;
	cin >> n;
	for (int i = 0; i<n; i++){
		int m;
		cin >> m;

		int j = solve(m);
		if (j == 1)p++;
	}

	cout << p << endl;
	return 0;

}