#include<iostream>
using namespace std;
int main(){
	int a1,a2,a3,a4,b=0;
	for(int i=0;i<2;i++){
		cin >> a1 >> a2 >> a3 >> a4;
		if(a1+a2+a3+a4>=b)b=a1+a2+a3+a4;
	}
	cout << b <<endl;
	return 0;
}