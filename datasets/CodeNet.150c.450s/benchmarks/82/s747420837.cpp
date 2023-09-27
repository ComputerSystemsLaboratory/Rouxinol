#include <iostream>
#include <string>
using namespace std;

void diceS(int []);
void diceE(int []);
void diceW(int []);
void diceN(int []);
void diceR(int []);

int main(){
	int d[6],p,n,m;
	string str;
	for(int i=0;i<6;i++) cin >> d[i];
	cin >> p;
	while(p--){
		cin >> n >> m;
		for(int k=0;k<4;k++){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(d[0]==n && d[1]==m){
					cout << d[2] << endl;
					goto LOOP;
				}
				diceS(d);
			}
			diceE(d);
		}
		diceR(d);
		}
		LOOP:;
	}

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

void diceR(int a[6]){
	int w;
	w=a[1];
	a[1]=a[2];
	a[2]=a[4];
	a[4]=a[3];
	a[3]=w;
}