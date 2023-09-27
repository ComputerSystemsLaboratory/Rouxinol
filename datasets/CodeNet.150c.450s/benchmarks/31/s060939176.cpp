#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main () {
	int n,i,c=0;
	cin >> n;
	int a[n],b[n-1];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(i>0) b[i-1]=a[i]-a[i-1];
	}
	int max=b[0];
	for(i=0;i<n-1;i++){
		c+=b[i];
		if(c>max) max=c;
		if(c<=0) c=0;
	}
	cout << max << endl;
}