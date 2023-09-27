//#define _USE_MATH_DEFINES
//#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>

using namespace std;


int main(){

	int n, buf,min,max;
	long long ans, sum;
	vector <int> p;


	while (1){
		p.clear();
		sum = 0;
		ans = -100000;

		cin >> n;
		if (n == 0)break;

		for (int i = 0; i < n; i++){
			cin >> buf;
			p.push_back(buf);
		}

		for (int left = 0; left < n; left++){
			if (p[left] >= 0){
				for (int right = left; right < n; right++){
					if (p[right] >= 0){
						for (int i = left; i <= right; i++){
							sum += p[i];
						}
						if (sum > ans) ans = sum;
						sum = 0;
					}
				}
			}
		}
		if (ans == -100000){
			for (int i = 0; i < n; i++){
				if (p[i]>ans)ans = p[i];
			}
		}


		cout << ans << endl;

	}

	return 0;
}