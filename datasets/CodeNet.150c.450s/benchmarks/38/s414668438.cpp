#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
