#include<iostream>
using namespace std;
int main(){
	int m, f, r, i;
	while (true){
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1){ break; }
		if (m + f >= 80){
			cout << "A" << endl;
		}
		if (m + f >= 65 && m + f < 80){
			cout << "B" << endl;
		}
		if (m + f >= 50 && m + f < 65 && m != -1 && f != -1){
			cout << "C" << endl;
		}
		if (m + f >= 30 && m + f < 50 && m != -1 && f != -1){
			if (r < 50){
				cout << "D" << endl;
			}
			if (r >= 50){
				cout << "C" << endl;
			}
		}
		if (m + f<30){
			cout << "F" << endl;
		}
		if (m == -1){
			cout << "F" << endl;
		}
		if (f == -1){
			cout << "F" << endl;
		}
	}
}