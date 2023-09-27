#include<iostream>
using namespace std;

int main(){
	int h;
	int m;
	int s;
	cin >> s;
	h = s/(60*60);
	m = s/60-h*60;
	s = s-(h*60+m)*60;
	cout << h << ":" << m << ":" << s << endl;
	return 0;
}