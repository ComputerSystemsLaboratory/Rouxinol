#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> stu_num;
	for (int i = 0; i < 28; i++){
		int tmp;
		cin >> tmp;
		stu_num.push_back(tmp);
	}

	bool f = false;

	//for all size number 
	for (int i = 1; i <= 30; i++) {
		f = false;
		for (int j = 0; j < (int)stu_num.size(); j++){
			if(i == stu_num[j])
				f = true;
		}
		if(!f)
			cout << i << endl;

	}
	return 0;
}