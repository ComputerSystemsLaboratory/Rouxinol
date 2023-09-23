#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

bool Judge(int a){
	double b = a;
	//sqrt()???int?????\?????????
	for(int i = 2; i <= sqrt(b); i++){
		if(a % i == 0) return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int Count = 0;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(Judge(a) == true) Count++;
	}
	cout << Count << endl;
	return 0;
}