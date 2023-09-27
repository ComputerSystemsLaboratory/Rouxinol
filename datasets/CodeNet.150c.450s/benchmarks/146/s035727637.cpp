#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <iterator>

using namespace std;

int main(){
	
	int n;
	
	float x[4], y[4];
	
	cin >> n;
	
	for(int loop = 0; loop < n; loop++){
		for(int i = 0; i < 4; i++){
			cin >> x[i] >> y[i];
		}
		x[1] -= x[0];
		y[1] -= y[0];
		x[3] -= x[2];
		y[3] -= y[2];
		if(x[3] * y[1] == y[3] * x[1]){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}