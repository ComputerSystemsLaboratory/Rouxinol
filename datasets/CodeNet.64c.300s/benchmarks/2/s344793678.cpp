#include <iostream>

using namespace std;

int main(){
	int m, f, r, score;
	for(;;){
		cin >> m >> f >> r;
		if(m != -1 || f != -1 || r != -1){
			score = m + f;
			if(m == -1 || f == -1){
				cout << 'F' << endl;
				continue;
			}
			if(score >= 80){
				cout << 'A' << endl;
			}else if(score >= 65){
				cout << 'B' << endl;
			}else if(score >= 50){
				cout << 'C' << endl;
			}else if(score >= 30){
				if(r >= 50){
					cout << 'C' << endl;
				}else{
					cout << 'D' << endl;
				}
			}else{
				cout << 'F' << endl;
			}
			continue;
		}
		return 0;
	}
}