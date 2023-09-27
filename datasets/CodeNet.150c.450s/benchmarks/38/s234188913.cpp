#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include<string>
#include <algorithm>
#include <functional>
#include <cmath>
using namespace std;
typedef vector <int> ivector;


int main(){
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		int a, b, c;
		cin >> a >> b >> c;
		int ma = max(a, max(b, c));
		int mi = min(a, min(b, c));
		int mid = a + b + c - ma - mi;
		if (pow(ma,2)==pow(mi,2)+pow(mid,2)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	

	return 0;
}