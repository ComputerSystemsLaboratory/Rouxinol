#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>

using namespace std;

int main(void){
	
	int i, j, n, count = 0;
	bool arr[999999] = {false};

	while (cin >> n) {

		for (i = 2; i <= n; i++) {
			arr[i] = true;
		}

		for (i = 2; i <= sqrt(n); i++) {
			if(arr[i])
				for (j = 0; i*(j + 2) <= n; j++) {
					arr[i*(j + 2)] = false;
				}
		}

		for (i = 2; i <= n; i++) {
			if (arr[i] == true)
				count++;
		}

		cout << count << endl;
		count = 0;

	}

	return 0;
}