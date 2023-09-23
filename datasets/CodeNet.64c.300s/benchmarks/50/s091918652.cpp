#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main () {
	int n,i,c,b=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	int flag =1;
	while(flag){
		flag = 0;
		for(i=n-1;i>=1;i--){
			if(a[i]<a[i-1]){
				b++;
				c=a[i];
				a[i]=a[i-1];
				a[i-1]=c;
				flag=1;
			}
		}
	}
	for(i=0;i<n;i++){
		if(i!=n-1) cout << a[i] << " ";
		else cout << a[i] << endl;
	} 
	cout << b << endl;
}