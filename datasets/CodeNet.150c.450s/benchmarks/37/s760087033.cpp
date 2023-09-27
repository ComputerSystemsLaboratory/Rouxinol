#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

static vector<double> solve_simultaneous(const vector<double> &set) {
	vector<double> result(2, 0);
	result.at(0) = ( (set.at(2) * set.at(4) - set.at(1) * set.at(5))
		/ (set.at(0) * set.at(4) - set.at(1) * set.at(3)) );
	result.at(1) = ( (set.at(2) * set.at(3) - set.at(0) * set.at(5))
		/ (set.at(1) * set.at(3) - set.at(0) * set.at(4)) );

	if (result.at(0) == 0) {
		result.at(0) = 0;
	}
	if (result.at(1) == 0) {
		result.at(1) = 0;
	}

	return result;
}

int main(void) {
	int dataset_counter = 0;
	double check_input = 0;
	vector<vector<double> > input;

	while (cin >> check_input) {
		input.push_back(vector<double>(6));
		input.at(dataset_counter).at(0) = check_input;
		for (int i = 1; i < 6; i ++) {
			double temp;
			cin >> input.at(dataset_counter).at(i);
		}

		dataset_counter ++;
	}

	for (vector<double> dataset : input) {
		vector<double> result(2, 0);
		result = solve_simultaneous(dataset);

		cout << fixed;
		cout << setprecision(3) << result.at(0) << " "
		<< setprecision(3) << result.at(1) << endl;
	}

	return 0;
}

