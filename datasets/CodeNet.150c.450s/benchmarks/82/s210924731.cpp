#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
class dice{
public:
	int num[6], tmp;
	void moveS(){
		tmp = num[0];
		num[0] = num[4];
		num[4] = num[5];
		num[5] = num[1];
		num[1] = tmp;
	}
	void moveN(){
		tmp = num[0];
		num[0] = num[1];
		num[1] = num[5];
		num[5] = num[4];
		num[4] = tmp;
	}
	void moveW(){
		tmp = num[0];
		num[0] = num[2];
		num[2] = num[5];
		num[5] = num[3];
		num[3] = tmp;
	}
	void moveE(){
		tmp = num[0];
		num[0] = num[3];
		num[3] = num[5];
		num[5] = num[2];
		num[2] = tmp;
	}
};
int main(){
	dice a;
	for (int i = 0; i < 6; i++){
		cin >> a.num[i];
	}
	int n,c,b;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> c >> b;
		if (a.num[2] == b || a.num[3] == b){
			a.moveE();
		}
		while (1){
			a.moveN();
			if (a.num[1] == b)break;
		}
		while (2){
			a.moveE();
			if (a.num[0] == c)break;
		}
		cout << a.num[2] << endl;
	}
	
	return 0;
}

