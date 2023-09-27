#include<iostream>
using namespace std;

int main(){
	int a, b, c, d = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	for (int i = 0; i < b - a + 1;){
		if (c % (a + i) == 0){
			d++;
		}
		i++;
	}
	cout << d << endl;
}