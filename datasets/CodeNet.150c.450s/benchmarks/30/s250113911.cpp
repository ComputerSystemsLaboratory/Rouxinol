#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main () {
	int n,i,c,b=0,j,minj;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		minj=i;
		for(j=i;j<n;j++){
			if (a[j]<a[minj]){
				minj=j;
			}
		}
		if(i==minj) b--;
		c=a[i];
		a[i]=a[minj];
		a[minj]=c;
		b++;
	}
	for(i=0;i<n;i++){
		if(i!=n-1) cout << a[i] << " ";
		else cout << a[i] << endl;
	}
	cout << b << endl;
}