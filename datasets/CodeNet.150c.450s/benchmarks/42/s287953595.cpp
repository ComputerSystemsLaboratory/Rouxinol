#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

struct Data {
	int n;
	string name;
};

int main() {
	int N;
	int timeStep;
	int time = 0;
	queue<Data> datas;
	queue<Data> ends;

	cin >> N;
	cin >> timeStep;

	for (int i = 0; i < N; i++) {
		Data buf;
		cin >> buf.name >> buf.n;
		datas.push(buf);
	}

	while (!datas.empty()) {
		Data d = datas.front();

		time += min(d.n, timeStep);
		d.n -= timeStep;

		if (d.n <= 0) {
			Data temp;
			temp.name = d.name;
			temp.n = time;
			ends.push(temp);
		}
		else {
			datas.push(d);
		}

		datas.pop();
	}

	while (!ends.empty()) {
		cout << ends.front().name << " " << ends.front().n << endl;
		ends.pop();
	}
	return 0;
}