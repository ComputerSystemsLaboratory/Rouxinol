#include <iostream>
//#include <stdio.h>
using namespace std;

int main(){
	int n, m;
	int a[1000];
	cin >> n;
	//a = (int *)malloc(sizeof(int) * n);
	
	for (int i = 0;i < n;i++){ 
		cin >> m;
		a[i] = m;
	}
	
	for (int i = n-1;i > 0; i--){
		cout << a[i] << " ";
	}
	cout << a[0];
	cout << endl;
	return 0;
}