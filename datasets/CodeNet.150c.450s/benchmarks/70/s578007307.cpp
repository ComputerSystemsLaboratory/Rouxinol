#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, b;
	int x;
	int i = 0;
	string l[70];
	while (true){
		cin >> a >> b;
		if (a == 0 && b == 0) {
			x = i;
			break;
		}
		if (a == 1 || a == 4 || a == 7){
			b += 4;
		}
		else if (a == 2 || a == 8){
			b += 0;
		}
		else if (a == 3 || a == 11){
			b += 1;
		}
		else if (a == 5){
			b += 6;
		}
		else if (a == 6){
			b += 2;
		}
		else if (a == 9 || a == 12){
			b += 3;
		}
		else if (a == 10){
			b += 5;
		}
		//
		if (b % 7 == 1){
			l[i] = "Sunday";
		}
		else if (b % 7 == 2){
			l[i] = "Monday";
		}
		else if (b % 7 == 3) {
			l[i] = "Tuesday";
		}
		else if (b % 7 == 4) {
			l[i] = "Wednesday";
		}
		else if (b % 7 == 5) {
			l[i] = "Thursday";
		}
		else if (b % 7 == 6) {
			l[i] = "Friday";
		}
		else if (b % 7 == 0) {
			l[i] = "Saturday";
		}
		i++;
	}
	for (int i = 0; i < x; i++){
		cout << l[i] << endl;
	}
	char c;
	cin >> c;
}