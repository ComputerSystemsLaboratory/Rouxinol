#include<iostream>
#include<vector>

using namespace std;

int main(void) {

	/*
	double x[3] = { 0,0,0 };
	double y[3] = { 0,0,0 };
	double xp = 0, yp = 0;
	int flag[3] = { 0,0,0 };

	while (cin >> x[0]>> y[0]>> x[1]>> y[1]>> x[2]>> y[2]>> xp>> yp) {
		for (int i = 0; i < 3; i++) {
			int temp1 = (i + 1) % 3;
			int temp2 = (i + 2) % 3;
			double checkI = (y[temp1] - y[i]) * (x[temp2] - x[i]) - (x[temp1] - x[i]) * (y[temp2] - y[i]);
			double checkP = (y[temp1] - y[i]) * (xp - x[i]) - (x[temp1] - x[i]) * (yp - y[i]);

			if (checkI * checkP > 0) {
				flag[i] = 1;
			}
		}
		if (flag[0] == 1 && flag[1] == 1 && flag[2] == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		flag[0] = 0;
		flag[1] = 0;
		flag[2] = 0;
	}
	*/
	/*
	int input_num;
	vector<int> train_num;
	while (cin >> input_num) {
		if (input_num == 0) {
			cout << train_num.back() << endl;
			train_num.pop_back();
		}
		else if (input_num >= 1 && input_num <= 10) {
			train_num.push_back(input_num);
		}
	}
	*/
	/*
	int d;
	int sum = 0;
	while (cin >> d) {
		for (int i = 0; i < 600 / d; i++) {
			sum += d*i*d*i*d;
		}
		cout << sum << endl;
		sum = 0;
	}
	*/
	/*
	int a[4], b[4];

	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		int hit = 0;
		int blow = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (a[i] == b[j]) {
					if (i == j) {
						hit++;
					}
					else {
						blow++;
					}
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
	*/

	int Month[13]{
		0,
		31,29,31,30,
		31,30,31,31,
		30,31,30,31
	};
	//??????0?????\???6
	int dow = 2;
	int in_day, in_month;
	while (cin >> in_month >> in_day) {

		if (in_month == 0)break;

		dow = 2;
		for (int i = 0; i < in_month; i++) {
			dow += Month[i];
		}
		dow += in_day;
		if (dow % 7 == 0) {
			cout << "Monday" << endl;
		}
		else if (dow % 7 == 1) {
			cout << "Tuesday" << endl;
		}
		else if (dow % 7 == 2) {
			cout << "Wednesday" << endl;
		}
		else if (dow % 7 == 3) {
			cout << "Thursday" << endl;
		}
		else if (dow % 7 == 4) {
			cout << "Friday" << endl;
		}
		else if (dow % 7 == 5) {
			cout << "Saturday" << endl;
		}
		else if (dow % 7 == 6) {
			cout << "Sunday" << endl;
		}
	}
	return 0;
}