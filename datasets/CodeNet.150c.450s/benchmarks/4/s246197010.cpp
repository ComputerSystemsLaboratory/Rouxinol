#include<iostream>
using namespace std;
int main(){
	int m, f, r, z;
	while (1){
		cin >> m >> f >> r;
		z = m + f;
		if (m == -1 && f == -1 && -1)break;
		
		if (z >= 80){
			cout << 'A' << endl;
		}
		else if (z >= 65){
			cout << 'B' << endl;

		}
		else if (z >= 50 || r >= 50){
			cout << 'C' << endl; 
		} else if (z>=30&&m!=-1&&f!=-1){
			cout << 'D' << endl;
		}
		else cout << 'F' << endl;
	}




















	return 0;
}