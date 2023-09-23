#include <iostream>
#include <string>
using namespace std;

int main(){
	int m, f, r, mandf;
	string o;
	while (1){
		cin >> m >> f >> r;
		mandf = (m >= 0 && f >= 0) ? m + f : (m >= 0) ? m : (f >= 0) ? f : 0;
		if (m == -1 && f == -1 && r == -1){
			break;
		}
		else if (m == -1 || f == -1){
			o += "F";
		}
		else if (mandf >= 80){
			o += "A";
		}
		else if (mandf >= 65){
			o += "B";
		}
		else if (mandf >= 50){
			o += "C";
		}
		else if (mandf >= 30){
			if (r >= 50){
				o += "C";
			}
			else{
				o += "D";
			}
		}
		else{
			o += "F";
		}
		o += "\n";
	}
	cout << o;
}