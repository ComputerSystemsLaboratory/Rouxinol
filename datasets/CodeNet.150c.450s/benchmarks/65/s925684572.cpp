#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	char line[36][2],line2[36][2];
	int time;
	cin >> time;
	for (int i = 0; i < time; ++i) {
		cin >> line[i][0] >> line[i][1];
		line2[i][0] = line[i][0];
		line2[i][1] = line[i][1];
	}
	for (int i = 0; i < time - 1; ++i) {
		for (int i2 = time - 1; i2 > i; --i2) {
			if (line[i2][1] < line[i2 - 1][1]) {
				swap(line[i2], line[i2 - 1]);
			}
		}
	}
	for (int i = 0; i < time-1; ++i) {
		cout << line[i][0] << line[i][1] << " ";
	}
	cout << line[time - 1][0] << line[time - 1][1] << endl << "Stable" << endl;

	int place;
	for (int i = 0; i < time - 1; ++i) {
		place = i;
		for (int i2 = i+1; i2 < time; ++i2) {
			if (line2[place][1] > line2[i2][1]) {
				place = i2;
			}
		}
		if (place != i) {
			swap(line2[i], line2[place]);
		}
	}
	for (int i = 0; i < time - 1; ++i) {
		cout << line2[i][0] << line2[i][1] << " ";
	}
	cout << line2[time - 1][0] << line2[time - 1][1] << endl;
	int ans=0;
	for (int i = 0; i < time; ++i) {
		if (line[i][0] == line2[i][0])ans++;
	}
	if (ans == time) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}
	return 0;
}