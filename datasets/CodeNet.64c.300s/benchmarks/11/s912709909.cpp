#include<iostream>
using namespace std;

int main(){
	int s = 0, m = 0, h = 0;
	cin >> s;
	while(true){
		if(s >= 60){
			s -= 60;
			++m;
		}
		else
			break;
	}
	while(true){
		if(m >= 60){
			m -= 60;
			++h;
		}
		else
			break;
	}
	cout << h << ":" << m << ":" << s << endl;
	return 0;
}