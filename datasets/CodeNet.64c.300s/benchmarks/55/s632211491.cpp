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

	int x = 1;
	// char ;

	//cin >> W >> H >> x >> y >> r;
	
	for(int i = 1;x!= 0;i++){
		cin >> x;
		if(x != 0) cout <<"Case "<<i<< ": " << x <<endl;
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