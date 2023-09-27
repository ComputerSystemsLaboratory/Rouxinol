#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int Zeller(int y, int m, int d){
	if (m == 1){ m = 13; --y; }
	else if (m == 2){ m = 14; --y; }
	return (int)(d + floor(26.0 * (m + 1.0) / 10.0) + (y % 100) + floor((y % 100) / 4.0) + (5.0 * (floor(y / 100.0))) + floor(floor(y / 100.0) / 4.0)) % 7;
}

int main(){
	string days[7] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
	int m, d;
	
	while (true){
		cin >> m >> d;
		if (m == 0 && d == 0)break;
		cout << days[Zeller(2004, m, d)] << endl;
	}
	return 0;
}