#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main() {
	string a;
	int num[7];
	int swap;
	for(int i = 1;i < 7;i++){
		cin >> num[i];
	}
	cin >> a;
	for(int i = 0;i < a.size();i++){
		swap = num[1];
		if(a[i] == 'N'){
			num[1] = num[2];
			num[2] = num[6];
			num[6] = num[5];
			num[5] = swap;
		}
		else if(a[i] == 'S'){
			num[1] = num[5];
			num[5] = num[6];
			num[6] = num[2];
			num[2] = swap;
		}
		else if(a[i] == 'E'){
			num[1] = num[4];
			num[4] = num[6];
			num[6] = num[3];
			num[3] = swap;
		}
		else if(a[i] == 'W'){
			num[1] = num[3];
			num[3] = num[6];
			num[6] = num[4];
			num[4] = swap;
		}
	}
	cout << num[1] << endl;
}