#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;
typedef vector<long long int> vi;
typedef vector<long long int>::iterator vit;

int main(){
	int m, d, c = 0;
	bool f = 0;
	int a[13] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	while (cin >> m >> d){
		if (m == 0)break;
		for (int i = 0; i < m; i++){
			for (int j = 0; j < a[i]; j++){
				c++;
				if (i == m - 1 && j == d - 1){
					f = 1;
					break;
				}
			}
			if (f)break;
		}
		c = c % 7;
		if (c == 1){
			cout << "Thursday\n";
		}
		else if (c == 2){
			cout << "Friday\n";
		}
		else if (c == 3){
			cout << "Saturday\n";
		}
		else if (c == 4){
			cout << "Sunday\n";
		}
		else if (c == 5){
			cout << "Monday\n";
		}
		else if (c == 6){
			cout << "Tuesday\n";
		}
		else {
			cout << "Wednesday\n";
		}
		c = 0;
		f = 0;
	}
}