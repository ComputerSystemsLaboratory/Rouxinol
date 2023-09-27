#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > dataset;
vector<int> temp;

int main() {
	int data[3] = {0, 0, 0};
	int i, j, flag;
	int sum_exam_points;
	i = 0;
	j = 0;
	flag = 0;

	while(1) {
		cin >> data[0] >> data[1] >> data[2];
		if(data[0] == -1 && data[1] == -1 && data[2] == -1)
			break;
		for(i = 0; i < 3; i++)
			temp.push_back(data[i]);
		dataset.push_back(temp);
		temp.clear();
	}

	for(i = 0; i < dataset.size(); i++) {
		sum_exam_points = dataset[i][0] + dataset[i][1];
		if(sum_exam_points >= 80) flag = 1;
		if(sum_exam_points >= 65 && sum_exam_points < 80) flag = 2;
		if(sum_exam_points >= 50 && sum_exam_points < 65) flag = 3;
		if(sum_exam_points >= 30 && sum_exam_points < 50) flag = 4;
		if(sum_exam_points < 30) flag = 0;
		if(dataset[i][0] == -1 || dataset[i][1] == -1) flag = 0;

		switch(flag) {
			case 0:
				cout << "F" << endl;
				break;
			case 1:
				cout << "A" << endl;
				break;
			case 2:
				cout << "B" << endl;
				break;
			case 3:
				cout << "C" << endl;
				break;
			case 4:
				if(dataset[i][2] >= 50) {
					cout << "C" << endl;
					break;
				} else {
					cout << "D" << endl;
					break;
				}
		}
	}
}