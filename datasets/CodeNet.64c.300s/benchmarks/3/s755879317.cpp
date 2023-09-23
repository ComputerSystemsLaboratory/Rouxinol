#include<iostream>
using namespace std;

int main(){
	int n;
	cin >>n;
	
	int rev[n];
	for (int i=0; i<n; i++){
		int m=n-i-1;
		cin >>rev[m];
	}
	for (int i=0; i<n; i++){
		if (i!=0)cout <<" ";
		cout << rev[i] ;
	}
	cout <<"\n";
	return 0;
}