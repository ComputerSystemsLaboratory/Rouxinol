#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void) {
	int dataset_num = 0;
	int sum = 0;
	int max = 0;
	int min = 1001;
	int score;
	int j_num;

	cin >> j_num;

	while (j_num != 0 && dataset_num < 20){
		for (int i = 0; i < j_num; i++){
			cin >> score;

			if (score > max) {
				max = score;
			}
			if (score < min) {
				min = score;
			}

			sum += score;
		}

		sum = sum - max - min;
		double ave_score = sum / (j_num-2);
		cout << ave_score << endl;

		cin >> j_num;
		dataset_num++;
		sum = 0;
		max = 0;
		min = 1001;
	}	
	return 0;
}