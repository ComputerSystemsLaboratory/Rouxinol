#include<iostream>
#include<algorithm>

using namespace std;

int GCD(int a, int b){
	if(a < b){
		swap(a, b);
	}
	while(b){
		a %= b;
		swap(a, b);
	}
	return a;
}

int LCM(int a, int b){
	return a / GCD(a, b) * b;
}

int main(){
	int a, b;
	while(cin >> a >> b){
		cout << GCD(a, b) << ' ' << LCM(a, b) << endl;
	}
	return 0;
}