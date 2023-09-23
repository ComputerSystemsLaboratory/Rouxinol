#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main(){
	int n;
	cin >> n;
	int r[n];
	for(int i = 0;i<n;i++) cin >> r[i];//4,3,2

	int ancer = -2000000000;
	int minv = r[0];
	for(int i = 1;i<n;i++){
		ancer = max(ancer,r[i] -minv);
		minv = min(minv,r[i]);
	}

	cout << ancer << endl;

	return 0;
}
