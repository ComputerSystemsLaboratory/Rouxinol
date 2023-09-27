#include<iostream>
#include<stdio.h>
using namespace std;

int yagi;
int ushi;
int shika;
char uma;
int hiru;
char a[100000000];
char b[100000000];
int main(){
	while (true){
		cin >> ushi;
		if (ushi == 0){
			break;
		}
		for (int i = 0; i < ushi; i++){
			cin >> a[i] >> b[i];
		}
		cin >> shika;
		for (int j = 0; j < shika; j++){
			cin >> uma;
			hiru = 0;
			for (int k = 0; k < ushi; k++){
				if (uma == a[k]){
					cout << b[k];
					hiru = 1;
				}
			}
			if (hiru == 0){
				cout << uma;
			}
		}
		cout << endl;
	}
}