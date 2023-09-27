#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int sa = 0, sb = 0;
	for(int i = 0; i < 4; i++){
		int a;
		cin >> a;
		sa += a;
	}
	for(int i = 0; i < 4; i++){
		int a;
		cin >> a;
		sb += a;
	}
	cout << max(sa, sb) << endl;
	return 0;
}
