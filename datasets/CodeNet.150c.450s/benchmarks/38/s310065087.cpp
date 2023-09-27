#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	int n, in[3];
	string res;
	cin >> n;
	for (int i = 0; i < n; ++i){
		res = "NO";
		for (int j = 0; j < 3; ++j)	cin >> in[j];
		for (int j = 0; j < 3; ++j){
			if (pow(in[j%3], 2) == pow(in[(j+1)%3], 2) + pow(in[(j+2)%3], 2)){
				res = "YES";
			}
		}
		cout << res << endl;
	}

	return 0;
}