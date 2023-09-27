#include<iostream>
using namespace std;

int dx[31];

int main(){
	int n;
	dx[1] = 1;
	dx[2] = 2;
	dx[3] = 4;
	for(int i = 4; i <= 30; i++){
		dx[i] = dx[i - 3] + dx[i - 2] + dx[i - 1];
	}
	while(cin >>n){
		if(n == 0) break;
		int day, year;
		day = dx[n] / 10;
		if(dx[n] % 10 != 0) day++;
		year = day / 365;
		if(day % 365 != 0) year++;
		cout <<year <<endl;
	}
	return 0;
}