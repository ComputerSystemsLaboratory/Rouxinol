#include<iostream>
#include<string>
#include<vector>

#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	vector<vector<int> >num;
	int temp1 = 0;
	int temp2 = 0;
	int n_end = 0;

	int i = 0;

	while (1) {
		CI temp1;
		CI temp2;
		if (temp1 == 0 && temp2 == 0) {
			n_end = i;
			break;
		}
		num.push_back(vector<int>(2,0));
		
		if (temp1 > temp2) {
			num[i][0] = temp2;
			num[i][1] = temp1;
		}
		else {
			num[i][0] = temp1;
			num[i][1] = temp2;
		}
		++i;
	}
	
	for (int i = 0; i < n_end; ++i) {
		CO num[i][0] << " " << num[i][1] E
	}

}