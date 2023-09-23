#include<iostream>
#include<cmath>
using namespace std;

int Prime(int x){
	if(x<2) return 0;
	else if( x==2 ) return 1;
	if( x%2==0 ) return 0;
	for(int i=3; i*i<=x; i++){
		if( x%i==0 ) return 0;
	}
	return 1;
}


int main(){
	int n,s=0,x[10000];
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> x[i];
		if( Prime(x[i]) ) s++;
	}

	cout << s << "\n";
	return 0;
}