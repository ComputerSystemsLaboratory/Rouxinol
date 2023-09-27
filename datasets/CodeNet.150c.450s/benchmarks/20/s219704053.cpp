#include <iostream>
using namespace std;

int main(){
	int s;
	cin >> s;
	int hour = s/3600;
	int minute = (s-3600*hour)/60;
	int second = (s-3600*hour-60*minute);

	cout << hour << ":" << minute << ":" << second << endl;
	return 0;
}