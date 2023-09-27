//Watch program
#include <iostream>
using namespace std;

int main(){
	int sec,h=0,m=0,s=0;

	cin >> sec;
	
	h=(sec-(sec%3600))/3600;
	sec=sec-3600*h;
	m=(sec-(sec%60))/60;
	sec=sec-60*m;
	s=sec;

	cout << h << ":" << m << ":" << s << endl;

	return 0;
}