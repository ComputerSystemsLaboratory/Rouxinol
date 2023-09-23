#include<iostream>
#include<algorithm>
//#include<fstream>

using namespace std;

int main() {
	int num, minv, prof;
	int* prate;
	cin >> num;
	prate = new int[num];
	cin >> prate[0] >> prate[1];
	minv = prate[0];
	prof = prate[1] - minv;
	minv = min(minv, prate[1]);
	for (int i = 2; i < num; i++) {
		cin >> prate[i];
		prof = max(prof, prate[i] - minv);
		minv = min(minv, prate[i]);
	}
	cout << prof << endl;
	return 0;
}