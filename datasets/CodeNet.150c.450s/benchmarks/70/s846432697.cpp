#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int hi[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string youbi[7] = {"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};

	int m, d;
	while(cin >> m >> d){
		if(m==0 && d==0)
			break;

		int ad = 0;
		for(int i=1;i<m;i++){
			ad+=hi[i-1];
		}
		cout << youbi[(ad+d-1)%7] << endl;
	}
	return 0;
}