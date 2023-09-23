#include<iostream>

using namespace std;

int main() {
	int S;
	int sec, min, hour;
	
	cin >> S;

	sec = S % 60;
	min = ((S - sec)/60) % 60;
	hour = ((S - sec - min)/3600) % 60;

	cout << hour << ":" << min << ":" << sec << endl;
	return 0;
}