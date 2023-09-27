#include <iostream>
using namespace std;

int main(){
	int n, a = 0, b = 0, arr[] = {0, 1, 3};
	cin >> n;
	while(n--){
		string s, t;
		cin >> s >> t;
		a += arr[(s > t) + (s >= t)];
		b += arr[(s < t) + (s <= t)];
	}
	cout << a << ' ' << b << endl;
}