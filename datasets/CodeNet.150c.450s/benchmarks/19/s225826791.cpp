/*
 * SwappingTwoNumbers.cpp
 *
 *  Created on: 2014/07/21
 *      Author: WanWan1985
 */
#include <iostream>
#include <vector>
using namespace std;

typedef struct {
	int x, y;
} DataSet;

void swap(int& a_x, int& a_y) {
	if (a_x > a_y) {
		int tmp = a_x;
		a_x = a_y;
		a_y = tmp;
	}
}

int main(void) {

	vector<DataSet> vecDataSet;
	while(1) {
		int x, y = 0;
		cin >> x >> y;
		if ((0 == x) && (0 == y)) {
			break;
		}
		DataSet data;
		data.x = x;
		data.y = y;
		vecDataSet.push_back(data);
	}

	for (unsigned int i = 0; i < vecDataSet.size(); i++) {
		DataSet data = vecDataSet.at(i);
		swap(data.x, data.y);
		cout << data.x << " " << data.y << endl;
	}

	return 0;
}