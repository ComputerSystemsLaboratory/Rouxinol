#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)

#define PI 3.14159265358479

int main(){
	int n;
	cin >> n;
	FOR(i,1,n+1){
		if (i % 3 == 0)cout << " " << i;
		long long int k = i;
		REP(j, 4){
			if (i % 3 == 0)break;
			if (k % 10 == 3){
				cout << " " << i;
				break;
			}
			k = k / 10;
		}
	}
	cout << endl;
	return 0;
}