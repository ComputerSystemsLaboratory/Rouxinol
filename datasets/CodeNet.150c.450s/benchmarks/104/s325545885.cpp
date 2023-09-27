#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a;
	cin >> b;
	int c[a];
	for(int i=0;i<a;i++) c[i] = i;
	for(int i=0;i<b;i++){
		int d,e;
		char com;
		cin >> d >> com >> e;
		int f = c[d-1];
		c[d-1] = c[e-1];
		c[e-1] = f;
	}
	for(int i=0;i<a;i++) cout << c[i]+1 << endl;
}