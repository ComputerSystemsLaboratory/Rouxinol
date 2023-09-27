#include<iostream>
using namespace std;

int main(){
	char* date[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
	int months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int m,d;
	while( cin >> m >> d, m ){
		int day=0;
		for( int i=0; i<m-1; i++ ){
			day += months[i];
		}
		day += d;
		cout << date[day%7] << endl;
	}
	return 0;
}