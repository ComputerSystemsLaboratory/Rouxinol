#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;

	cin >> n;
	int* a = new int[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
		
	}
	for(int x = 0;x < n;x++){
		cout << a[x] <<  flush;
		if(x != n - 1)
			cout << " " << flush;
	}
	cout << endl;
	for(int i = 1;i < n;i++){
		int v = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > v){
			a[j + 1] = a[j];
			j--;
		}
		a[j+1] = v;

		for(int x = 0;x < n;x++){
			cout << a[x] << flush;
			if(x != n - 1)
				cout << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
