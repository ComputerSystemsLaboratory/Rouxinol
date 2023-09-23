#include<iostream>

using namespace std;

int main() {
	int n, a, b, c;
	cin >> n;
	while(n>0) {
		cin >> a >> b >> c;
		if(a > b && a > c){			
			if(a*a == b*b + c*c) cout << "YES" << endl;
			else cout << "NO" <<endl;
		
		}else if(b > a && b > c){			
			if(b*b == a*a + c*c) cout << "YES" << endl;
			else cout << "NO" <<endl;

		}else{			
			if(c*c == a*a + b*b) cout << "YES" << endl;
			else cout << "NO" <<endl;
		}
		n--;
	}
	return 0;
}