#include <iostream>
using namespace std;

int main() {
	int h;
	int t[3]={};
	for(int i=0;i<10;i++){
	cin >> h;
	for(int j=0;j<3;j++){
		if(h>t[j]){
			for(int k=1;k>=j;k--){
				t[k+1]=t[k];
			}
			t[j]=h;
			break;
		}
	}
	}
	for(int i=0;i<3;i++){
	cout << t[i] << endl;}
	return 0;
}