#include<iostream>
using namespace std;

int main(){
	int yama[10];
	// int first = 0;
	// int second = 0;
	// int third = 0;

	for(int i=0; i<10; i++){
		cin >> yama[i];
	// 	if(yama[i] > first){
	// 		third = second;
	// 		second = first;
	// 		first = yama[i];
	// 	}
	// 	if(yama[i] > second && yama[i] < first)second = yama[i];
	// 	if(yama[i] > third && yama[i] < second)third = yama[i];
	}

	// cout << first << endl;
	// cout << second << endl;
	// cout << third << endl;
	
	int one,two;//??????????????¨
	for(int k=0; k<10; k++){
		for(int i=0; i<9; i++){
			if(yama[i] > yama[i+1]){
				one = yama[i];
				two = yama[i+1];
				yama[i] = two;
				yama[i+1] = one;

				// for(int j=0; j<10; j++){
				// cout << yama[j] << " ";
				// }
				// cout << endl;
			}
		}
	}

	cout << yama[9] << endl;
	cout << yama[8] << endl;
	cout << yama[7] << endl;

	return 0;
}