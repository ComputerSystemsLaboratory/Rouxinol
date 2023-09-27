#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int input;
	cin >> input;
	int hour = input / (60*60);
	input -= hour * (60*60);

	int minute = input / 60;
	input -= minute * (60);

	cout << hour << ":" << minute << ":" << input << endl;
	return 0;

}