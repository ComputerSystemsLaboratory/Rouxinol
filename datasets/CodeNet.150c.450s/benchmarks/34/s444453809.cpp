#include <iostream>
using namespace std;

int funk(int a,int b){
	int c=0;
	if(a==b){
		return 1;
	}else if(a>b){
		return 0;
	}else{
		c+=funk(a+1,b);
		c+=funk(a+2,b);
		c+=funk(a+3,b);
		return c;
	}
	
}
	
	
int main() {
	int n,aa,year;
	while(1){
	cin >> n;
	if(n==0) break;
	aa=funk(0,n);
	year=aa/3650;
	year+=1;
	cout << year << endl;
	}
	return 0;
}