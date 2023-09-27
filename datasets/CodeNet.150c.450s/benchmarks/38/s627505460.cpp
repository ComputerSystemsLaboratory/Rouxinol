#include <iostream>

using namespace std;

int main(){
	int a; int b; int c; int i; int n; int st; int sa;
	cin >> n;
	for (i = 1; i <= n; i++){
		cin >> a >> b >> c;
		a = a*a;
		b = b*b;
		c = c*c;
		if (a < b){
			if (b < c){
				st = c;
			}
			else{
				st = b;
				b = c;
			}
		}
		else{
			if (a < c){
				st = c;
			}
			else{
				st = a;
				a = c;
			}
		}
		sa = st - a - b;
		if (sa == 0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return  0;
}