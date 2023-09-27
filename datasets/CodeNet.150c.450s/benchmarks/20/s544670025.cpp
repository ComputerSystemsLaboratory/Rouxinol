#include<iostream>

using namespace std;

int main() {
	int x;
	cin >> x;
	int h, m, s;
	s = x % 60;
	m = int(x / 60) % 60;
	h = int(x / 3600) % 24;
	cout <<h<<":"<<m<<":"<<s<< endl;
	return 0;
}