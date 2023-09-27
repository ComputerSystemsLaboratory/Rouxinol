#include <iostream>
#include <stack>
#include <utility>
#include <string>
#include <math.h>
using namespace std;

string input;
stack< pair<int, int> > top;
stack< pair<int, int> > water;


float getArea(int start, int end) {
	float area = 0;

	int height = 0;
	for (int i = start; i<end; i++) {
		switch (input[i]) {
		case'/':
			area += -(height + 0.5);
			height++;
			break;
		case'\\':
			area += -(height - 0.5);
			height--;
			break;
		case'_':
			area += -height;
			;
		}
	}

	return area;
}

int main() {

	cin >> input;

	int length = (int)(input.length());
	int height = 20005;
	for (int i = 0; i < length; i++) {
		switch (input[i]) {
		case 47:
			height++;
			if (top.size() != 0 && top.top().second == height) {
				pair<int, int> popped = top.top();
				top.pop();
				int area = round(getArea(popped.first, i));
				water.push(make_pair(popped.first, area));
			}
			break;
		case 92:
			top.push(make_pair(i, height));
			height--;
		}
	}

	if (water.size() == 0) {
		cout << 0 << endl;
		cout << 0 << endl;
		return 0;
	}

	pair<int, int> latest = water.top();
	water.pop();
	int sum = latest.second;
	int num = 1;
	int arr[20000];
	arr[0] = latest.second;
	while (water.size()>0) {
		if (water.top().first>latest.first) {
			water.pop();
		}
		else {
			latest = water.top();
			water.pop();
			sum += latest.second;
			arr[num++] = latest.second;
		}
	}

	cout << sum << endl;
	cout << num;

	for (int i = num - 1; i >= 0; i--) {
		cout << ' ' << arr[i];
	}
	cout << endl;
	return 0;
}