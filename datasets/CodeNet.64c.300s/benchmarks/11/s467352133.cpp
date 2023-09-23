#include<iostream>

using namespace std;

int main(){
	int input, hh, mm, ss;
	cin >> input;
	hh = input / 3600;
	mm = (input % 3600) / 60;
	ss = input % 60;
	cout << hh << ":" << mm << ":" << ss << endl;
}