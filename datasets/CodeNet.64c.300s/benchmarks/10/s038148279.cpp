#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int x, y;

	while(1){
		cin >> x >> y;
		if((x == 0) & (y == 0)) break;
		if(x <= y){
			cout << x << " " << y << endl;
		}else{
			cout << y << " " << x << endl;
		}
	}

	return 0;
}