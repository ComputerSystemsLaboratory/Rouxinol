#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string a, b;
	int n = 0;
	
	getline( cin , a ) ;
	
	for(int i = 0; i < a.size(); ++i){
		
		if(a[i] >= 'A' && a[i] <= 'Z'){
			
			a[i] += 'a' - 'A' ;
		}
	}
	while(1){
		
		cin >> b;
		
		if(b == "END_OF_TEXT") break;
		
		for(int i = 0; i < b.size(); ++i){
		
			if(b[i] >= 'A' && b[i] <= 'Z'){
			
				b[i] += 'a' - 'A';
			}
		}
		
		if(b == a) ++n;
	}
	
	cout << n << endl;
	
	return 0;
}