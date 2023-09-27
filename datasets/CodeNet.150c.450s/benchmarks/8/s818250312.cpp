#include<iostream>
#include<string>
using namespace std;
int main() {
	int n; cin >> n;
	int t = 0, h = 0;
	for (int i = 0; i < n; i++){
		string a, b; cin >> a >> b;
		if (a == b){
			t++;
			h++;
		}
		else if (a > b){
			t += 3;
		}
		else if (a < b) {
			h += 3;
		}
	}
	cout << t << ' ' << h << endl;
	return 0;
}