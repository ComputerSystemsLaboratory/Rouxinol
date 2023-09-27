#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;

int main() {
	while(1) {
		int n, p;
		cin >> n >> p;
		if(n==0 && p==0) break;
		int player[n];
		for(int i=0; i<n; i++) player[i] = 0;

		int i=0;
		int num = p;
		while(1) {
			i = i%n;
			if(num!=0) {
				player[i]++;
				num--;
				if(player[i] == p) {
					cout << i << endl;
					break;
				}
			}
			else {
				int temp = player[i];
				player[i] = 0;
				num += temp; 
			}
			i++;
		}
	}
	return 0;
}