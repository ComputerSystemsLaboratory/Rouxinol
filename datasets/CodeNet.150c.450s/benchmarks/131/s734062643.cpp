#include<iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <list>
#include <map>
#include <cmath>
#include <utility>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <stdlib.h>

using namespace std;

void solve(int a, int L) {
	vector<int> d;	
	d.push_back(a);

	for(int i = 1; ; i++) {
		char tmp[7];

		sprintf(tmp,"%d",a);
		int size = strlen(tmp);
		tmp[L] = '\0';
		for(int j = size; j < L; j++) {
			tmp[j] = '0';
		}
			
		sort(tmp, tmp+L);
		int x = atoi(tmp);
		reverse(tmp, tmp+L);
		int y = atoi(tmp);
	
		a = y-x;
		for(int j = 0; j < d.size(); j++) {
			if(a != d[j]) continue;

			cout << j << " " << a << " " << i - j << endl;
			return;
		}
		d.push_back(a);
	}

}

int main(void) {
	
	while(true) {
		int a, L;

		cin >> a >> L;

		if(a == 0 && L == 0) return 0;

		solve(a, L);
	}

	return 0;
}