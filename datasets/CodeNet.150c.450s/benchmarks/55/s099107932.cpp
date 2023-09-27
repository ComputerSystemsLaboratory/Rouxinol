#include <iostream>
#include <math.h>
using namespace std;
int ctoi(char c){
    switch(c){
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        default : return -1;
    }
}
int main(){
	string x = "";
	for(;;) {
	   cin >> x;
	   if (x=="0") break;
		int sum = 0;
		for (int i=0; i<x.size(); i++){
			sum += ctoi(x[i]);
		}
		cout << sum << endl;
	}
}