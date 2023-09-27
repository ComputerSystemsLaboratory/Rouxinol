#include<iostream>

using namespace std;

int main(){
	
	int i ,a[31],b ;
	
	for(i=0;i<31;i++) a[i]=0;
	
	for(i=0;i<28;i++){
		cin >> b;
		a[b] = 1;
	}
	
	for(i=1;i<31;i++){
		if(a[i]==0) cout<< i<<endl;
	}
	
	
	
	
	return 0;
	
}
	