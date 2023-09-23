#include<iostream>
using namespace std;

int main(){
	int s;
	cin >> s;
	cout << (int)(s/3600) << ':' << (int)(s/60)%60<< ':' << s%60 << endl;
	return 0;
}