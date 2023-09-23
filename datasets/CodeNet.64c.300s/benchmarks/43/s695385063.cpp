#include <iostream>
using namespace std;

int main(){
	int i,m,s,e,a,b,aa;
	
	for(aa=0;aa<2;aa++){
		cin >> i >> m >> s >> e;
		
		if(aa==0){
			a = i + m + s + e;
		}
		if(aa==1){
			b = i + m + s + e;
		}
	}
	
	if(a>b || a==b){
		cout << a << endl;
	}
	
	else if(a<b){
		cout << b << endl;
	}
	
	return 0;
}