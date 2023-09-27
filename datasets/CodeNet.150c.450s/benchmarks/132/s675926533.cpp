#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int a[50];
	int n,b,p;
	while(1){
		cin >> n >>p;
		if((n==0)&&(p==0)) break;
		for (int i=0;i<n;i++){
			a[i]=0;
		}
		int i = 0;
		b = p;
		while(1){
		if(b!=0){
			a[i] +=1;
			b -=1;
			if(a[i] == p){
					cout << i <<endl;
					break;
				}
			if(i != n-1) i++;
			else i= 0;
		}
		else {
					b +=a[i] ;
					a[i] = 0;
					if(a[i] == p){
					cout << i <<endl;
					break;
				}
			if(i != n-1) i++;
			else i= 0;

		}
		}
	}
	return 0;
}