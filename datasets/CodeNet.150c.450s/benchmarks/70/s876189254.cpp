#include <iostream>
#include <string>
using namespace std;
string day[] = {"Satur","Sun","Mon","Tues","Wednes","Thurs","Fri"};
int main(){
	int m, d, h;
	while (cin >> m >> d, m) {
		h = d + (26 * m + (m < 3 ? 1418 : 1126)) / 10;
		cout << day[h % 7] + "day\n";
	}
}