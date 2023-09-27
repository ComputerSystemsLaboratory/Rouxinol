#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int k,n,i,a[10001],b[10001];
	cin >> n;
	i = 1;
	while (i<= n) {
		cin >> a[i];
		i++;
	}
	k= 2;
	b[1] = a[n];
	cout << b[1];
	while(k<=n){
		b[k] = a[n + 1 - k];
		cout << " " << b[k];
		k++;
	}
	printf("\n");
	return 0;
}
