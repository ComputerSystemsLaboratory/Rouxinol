#include<iostream>
using namespace std;

int main(){
	int yama[10], i, p, Flag = 0, t;
	for(i = 0; i < 10; i++)
		cin >> yama[i];
	while(1){
		Flag = 0;
		for(i = 0; i < 10; i++){
			if(i + 1 != 10){
				if(yama[i] < yama[i + 1]){
					t = yama[i];
					yama[i] = yama[i + 1];
					yama[i + 1] = t;
					Flag++;
				}
			}
		}
		if(Flag == 0)
			break;
	}
	cout << yama[0] << "\n";
	cout << yama[1] << "\n";
	cout << yama[2] << "\n";
	return 0;
} 