#include <iostream>
using namespace std;
int main(){
	bool a[30]={0};
	int temp;
	for(int i=0;i<28;i++){
		cin >> temp ;
		a[temp-1]=true;
	};
	for(int i=0;i<30;i++){
		if(a[i]==false) cout << i+1 << '\n' ;
	};
}