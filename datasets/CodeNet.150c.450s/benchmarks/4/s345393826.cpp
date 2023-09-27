#include<iostream>

using namespace std;
int main(){
	int t = 0;
	int k = 0;
	int s = 0;
	int i = 0;
	int sa = 0;
	int th[100];
	int kh[100];
	int sh[100];
	while (true){
		cin >> th[i] >> kh[i] >> sh[i];
		if (th[i] == -1 && kh[i] == -1 && sh[i] == -1){
			break;
		}
		t = th[i];
		k = kh[i];
		s = sh[i];
		if (th[i] == -1 && kh[i] != -1 && sh[i] != -1){
			if (i == 0){
				sa = sa + 10;
			}
			sa = sa + 1;
			t = t + 1;
		}
		else if (th[i] != -1 && kh[i] == -1 && sh[i] != -1){
			if (i == 0){
				sa = sa + 20;
			}
			sa = sa + 1;
			k = k + 1;
		}
		else if (th[i] != -1 && kh[i] != -1 && sh[i] == -1){
			if (i == 0){
				sa = sa + 30;
			}
			sa = sa + 1;
			s = s + 1;
		}
		i++;
		if (t == -1 || k == -1){
			cout << "F" << endl;
		}
		else{
			if (t + k >= 80){
				cout << "A" << endl;
			}
			else if (t + k >= 65){
				cout << "B" << endl;
			}
			else if (t + k >= 50){
				cout << "C" << endl;
			}
			else if (s >= 50){
				cout << "C" << endl;
			}
			else if (t + k >= 30){
				cout << "D" << endl;
			}
			else if (t + k <= 30 && t + k >= 0){
				cout << "F" << endl;
			}
		}
	}
}