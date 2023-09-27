#include<iostream>

using namespace std;

int main(void){
	int sec, h, m, s;
	
	cin >> sec;
	h = sec/3600;
	m = (sec%3600)/60;
	s = sec%3600%60;
	
	cout << h << ':' << m << ':' << s << endl;
	return 0;
}