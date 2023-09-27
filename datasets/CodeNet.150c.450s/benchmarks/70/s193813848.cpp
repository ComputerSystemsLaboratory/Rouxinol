#include <iostream>
#include <string>
using namespace std;

int main(){
	string week[] = {"Wednesday","Thursday","Friday","Saturday","Sunday", "Monday","Tuesday"};
	while(1){
		int a, b;
		cin >> a >> b;
		if(a == 0) break;
		int day = 1, c = 1, d = 1;
		while(1){
			if(a == c && b == d) break;
			day++;
			d++;
			if(c == 1 && d == 32 ||
				c == 2 && d == 30 ||
				c == 3 && d == 32 ||
				c == 4 && d == 31 ||
				c == 5 && d == 32 ||
				c == 6 && d == 31 ||
				c == 7 && d == 32 ||
				c == 8 && d == 32 ||
				c == 9 && d == 31 ||
				c == 10 && d == 32 ||
				c == 11 && d == 31){
				c++;
				d = 1;
			}
		}
		cout << week[day % 7] << endl;
	}
	return 0;
}