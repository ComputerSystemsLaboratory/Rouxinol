#include <iostream>
using namespace std;

int main(){
	int a[30]={};
	for(int i=0; i<28; i++){
		int n;
		cin >> n;
		a[n-1] = 1;
	}
	for(int i=0; i<30; i++){
		if(a[i]==0) cout << i+1 << endl;
	}
}