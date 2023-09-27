#include <iostream>
#include <string>
using namespace std;

void diceS(int []);
void diceE(int []);
void diceW(int []);
void diceN(int []);

int main(){
	int d[6];
	string str;
	for(int i=0;i<6;i++) cin >> d[i];
	cin >> str;
	for(int i=0;i<str.size();i++){
		switch(str[i]){
			case 'S':
				diceS(d);
				break;
			case 'E':
				diceE(d);
				break;
			case 'W':
				diceW(d);
				break;
			case 'N':
				diceN(d);
				break;
		}
	}
	cout << d[0] << endl;

	return 0;
}

void diceS(int a[6]){
	int w;
	w=a[0];
	a[0]=a[4];
	a[4]=a[5];
	a[5]=a[1];
	a[1]=w;
}


void diceE(int a[6]){
	int w;
	w=a[0];
	a[0]=a[3];
	a[3]=a[5];
	a[5]=a[2];
	a[2]=w;
}

void diceW(int a[6]){
	int w;
	w=a[0];
	a[0]=a[2];
	a[2]=a[5];
	a[5]=a[3];
	a[3]=w;
}

void diceN(int a[6]){
	int w;
	w=a[0];
	a[0]=a[1];
	a[1]=a[5];
	a[5]=a[4];
	a[4]=w;
}