//#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstdlib>
//#include <cmath>
#include <iostream>
#include <algorithm>
//#include <cstring>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <set>
using namespace std;

int main(void){

	int N;
	
	cin >> N;
	
	for(int i = 0; i<N;i++){
		int a, b, c;
		cin >> a >> b >> c;
		if(a > b) swap(a, b);
		if(a > c) swap(a, c);
		if(b > c) swap(b, c);
		
		if(a * a + b * b == c * c) cout << "YES" <<endl;
		else cout << "NO" << endl;
		
	}

	return 0;
}

/*
for(i=0;i<N;i++){
	cin >> X[i];
}


for(i=0;i<N;i++){
	for(j=0;j<N;j++){
		cin >> X[i][j];
	}
}
*/