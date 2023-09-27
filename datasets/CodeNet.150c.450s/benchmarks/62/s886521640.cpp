//#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstdlib>
//#include <cmath>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <set>
using namespace std;

int main(void){

	int a, b, c;
	// char ;

	cin >> a >> b >> c;
	
	if(a > b) swap(a, b);
	if(a > c) swap(a, c);
	if(b > c) swap(b, c);
	
	cout << a <<" " << b << " " << c<<endl;

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