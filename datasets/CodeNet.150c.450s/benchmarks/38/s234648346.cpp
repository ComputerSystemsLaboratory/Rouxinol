#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, a, b, c, i, x;
	cin >> n;
	for(i = 1; i <= n; i++){
		 cin >> a >> b >> c;
		 if(a > b){
		 	x = a;
		 	a = b;
		 	b = x;
		 }
		 if(b > c){
		 	x = b;
		 	b = c;
		 	c = x;
		 }
		 if(sqrt(a*a+b*b) == c){
		 	cout << "YES" << endl;
		 }else{
		 	cout << "NO" << endl;
		 }
	}
	return 0;
}