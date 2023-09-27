#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int taro = 0, hanako = 0;
	for (size_t i = 0; i < n; i++){
		string s, t;
		cin >> s >> t;
		if (s > t)taro += 3;
		else if (s < t)hanako += 3;
		else{
			++taro;
			++hanako;
		}
	}
	cout << taro << ' ' << hanako << endl;
	char c;
	cin >> c;
}