#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int a[5],k;
	for(int i=0;i<5;i++){
		cin >> a[i] ;
	}
	for(int i=1;i<5;i++){
		for(int j=0;j<5-i;j++){
			if(a[j]<a[j+1]){
				k=a[j]; a[j]=a[j+1]; a[j+1]=k;
			}
		}
	}
	for(int i=0;i<4;i++){
		cout << a[i] <<" " ;
	}
	cout << a[4] << "\n";
return 0;
}