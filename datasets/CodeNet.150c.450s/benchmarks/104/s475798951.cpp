
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#define pi 3.14159265358979323846264338
using namespace std;

int main() {
	int w;
	int amida[31];
	int n;
	char aaa;
	cin >> w >> n;
	int a, b, keep;
	for (int i = 1; i <= w; i++) {
		amida[i] = i;
	}
	for (int i = 0; i < n; i++) {
		cin >> a >>aaa>> b;
		keep = amida[a];
		amida[a] = amida[b];
		amida[b] = keep;
	}
	for (int i = 1; i <= w; i++) {
		cout << amida[i] << endl;
	}
	return 0;
}