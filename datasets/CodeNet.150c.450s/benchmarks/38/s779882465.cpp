#include <iostream>
#include <cmath>
using namespace std;

inline bool is_right_triangle(int a, int b, int c){
	return (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) ? true : false;
}


int main() {
	ios::sync_with_stdio(false);
	int n, a, b, c;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b >> c;
		if(is_right_triangle(a,b,c)) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

}