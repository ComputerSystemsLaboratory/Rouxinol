#include<iostream>
using namespace std;
int main(){
	int m, f, r, hasi;
	char seiseki[100];
	for (int i = 0; i < 100; i++){
		cin >> m;
		cin >> f;
		cin >> r;
		if (m == -1 && f == -1 && r == -1){
			break;
		}
		if (m == -1 || f == -1){
			seiseki[i] = 'F';
		}
		else if (m + f >= 80){
			seiseki[i] = 'A';
		}
		else if (m + f >= 65){
			seiseki[i] = 'B';
		}
		else if (m + f >= 50){
			seiseki[i] = 'C';
		}
		else if (m + f >= 30){
			if (r >= 50){
				seiseki[i] = 'C';
			}
			else{
				seiseki[i] = 'D';
			}
		}
		else{
			seiseki[i] = 'F';
		}
		hasi = i;
	}
	for (int i = 0; i <= hasi; i++){
		cout << seiseki[i] << endl;
	}
	return 0;
}