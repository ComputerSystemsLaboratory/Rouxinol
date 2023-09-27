#include<iostream>
using namespace std;

int main(){
	int n = 0;
	int a[n][3];
	int m = a[n][0];
	int f = a[n][1];
	int r = a[n][2];
	while(1){
		cin >> m >> f >> r;
		if(m == -1 && f == -1 && r == -1) break;
		else if (m == -1 || f == -1){
			cout << "F" << endl;
		}else if(m + f >= 80){
			cout << "A" <<endl;
		}else if(m + f < 80 && m + f >= 65){
			cout << "B" << endl;
		}else if(m + f < 65 && m + f >= 50){
			cout << "C" << endl;
		}else if(m + f < 50 && m + f >= 30){
			if(r >= 50){
				cout << "C" << endl;
			}else{
				cout << "D" << endl;
			}
		}else if(m + f < 30){
			cout << "F" << endl;
		}
	}

	return 0;
}