#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int sumA = 0,sumB = 0,apoint[4],bpoint[4];
	for(int i = 0;i<4;i++){
		cin >> apoint[i];
		sumA = sumA + apoint[i];
	}
	for(int i = 0;i<4;i++){
		cin >> bpoint[i];
		sumB = sumB + bpoint[i];
	}
	if(sumB > sumA){
		cout << sumB << endl;
	}
	else if(sumA > sumB){
		cout << sumA << endl;
	}
	else{
		cout << sumA << endl;
	}
	return 0;
}