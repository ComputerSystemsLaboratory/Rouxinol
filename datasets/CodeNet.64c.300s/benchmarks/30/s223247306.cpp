#include <iostream>
//#include <fstream>
#include <vector>
#include <string>
//#include <cstdlib>
//#include <algorithm>
//#include <set>
//#include <conio.h>
using namespace std;
 
int main(){
	int n;
	while(cin >> n&& n!=0){
		int sum=0,pri=1000-n;
		while(pri>=500){
			pri -=500;
			++sum;
		}
		while(pri>=100){
			pri -=100;
			++sum;
		}
		while(pri>=50){
			pri -=50;
			++sum;
		}
		while(pri>=10){
			pri -=10;
			++sum;
		}
		while(pri>=5){
			pri -=5;
			++sum;
		}
		while(pri>=1){
			pri -=1;
			++sum;
		}
		cout << sum << endl;
	}
	return 0;
}