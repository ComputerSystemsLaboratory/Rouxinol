#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>
#include<iomanip>

#define EPS (1e-10)
using namespace std;
#define PI (3.1415926535)

int main(){
	vector<int> a(5);
	bool f = true;

	for(int i = 0; i < 5; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	for(int i = 0; i < 5; i++){
		if(!f){
			cout << ' ';
		}
		cout << a[4-i];
		f = false;
	}
	cout << endl;


	return 0;
}