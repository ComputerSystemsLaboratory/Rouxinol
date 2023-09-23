#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a,b;
	while(n){
	a = b = 0;
	for(int i = 0; i < n; i++){
		int x,y;
		cin >> x >> y;
		if(x < y) b+=x+y;
		else if(y<x) a+=x+y;
		else{
			a += x;
			b += y;
		}
	}
	cout << a << " " << b << endl;
	cin >> n;
	}
}