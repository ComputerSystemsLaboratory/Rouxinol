#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring> 
#include <algorithm>

using namespace std;

int main()
{
	int e;
	while(1){
		cin >> e;
		if(e == 0) break;
		int x, y, z, p, m, min_m=1000000;
		for(z = 0; z <= 100; z++){
			if((z * z * z) > e) break;
			for(y = 0; y <= 1000; y++){
				if((y * y) + (z * z * z) > e) break;
				x = e - (y * y) - (z * z * z);
				min_m = min(min_m, x+y+z);
				}
			}
		cout << min_m << endl;
	}
	return 0;
}