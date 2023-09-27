/*
 * SimpleCalculator.cpp
 *
 *  Created on: 2014/07/21
 *      Author: WanWan1985
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef unsigned int u_int;
typedef struct {
	int a, b;
	string strOperant;
}DataSet;

int main(void) {

	vector<DataSet> vecDataSet;
	while(1) {
		DataSet data;
		int a, b;
		string op;
		cin >> a >> op >> b;
		if ("?" == op) {
			break;
		}
		data.a = a;
		data.strOperant = op;
		data.b = b;
		vecDataSet.push_back(data);
	}

	for (u_int i = 0; i < vecDataSet.size(); i++) {
		DataSet data = vecDataSet.at(i);

		if ("+" == data.strOperant) {
			cout << data.a + data.b << endl;
		} else if ("-" == data.strOperant) {
			cout << data.a - data.b << endl;
		} else if ("*" == data.strOperant) {
			cout << data.a * data.b << endl;
		} else {
			cout << data.a / data.b << endl;
		}
	}
	return 0;
}