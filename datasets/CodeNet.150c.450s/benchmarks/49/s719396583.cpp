#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;
#define no_way 100000000;


int d[400][400];


int main(int argc, char **argv){
	int n;
	vector<int> v;
	int value;
	int total = 0;

	while (cin >> n && n != 0) {
		total = 0;
		v.clear();
		for (int i = 0; i < n; i++) {
			cin >> value;
			v.push_back(value);
		}
		sort(v.begin(), v.end());

		for (int i = 1; i < n - 1; i++) {
			total += v[i];
		}
		cout << total / (n - 2) << endl;
	}

	return 0;
}