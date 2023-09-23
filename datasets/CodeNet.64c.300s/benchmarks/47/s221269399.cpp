#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	int occurs[101];
	
	for (int i = 0; i < 101; i++) {
		occurs[i] = 0;
	}
	
	int input = -1;
	cin >> input;
	while (input >= 0) {
		occurs[input]++;
		
		input = -1;
		cin >> input;
	}
	
	int maxVal = 0;
	for (int i = 0; i < 101; i++) {
		if (occurs[i] > maxVal) maxVal = occurs[i];
	}
	
	for (int i = 0; i < 101; i++) {
		if (occurs[i] == maxVal) cout << i << endl;
	}
	
	return 0;
}