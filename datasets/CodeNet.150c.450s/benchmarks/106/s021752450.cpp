#include<iostream>

using namespace std;

int main(){
	int a;
	int b;
	int c;
	int d[10000] = { 0 };
	int e = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	for (int i = 0; i < b - a + 1; i++){
		d[i] = a + i;
	}
	for (int i = 0; i < b - a + 1; i++){
		if (c%d[i] == 0){
			e = e + 1;
		}
	}
	cout << e << endl;
	return 0;
}