#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(){
	int m, min, max;

	while (1){
		cin >> m >> min >> max;
		if (m == 0 && min == 0 && max == 0) break;
		vector<int> student;
		for (int i = 0; i < m; i++){
			int x;
			cin >> x;
			student.push_back(x);
		}
		int MaxGap = 0;
		int count = 0;
		for (int i = min; i <= max; i++){
			if (i == 0)continue;

			int gap = student[i-1] - student[i];
			if (MaxGap <= gap){
				count = i;
				MaxGap = gap;
			}
		}
		cout << count << endl;
	}

	return 0;
}