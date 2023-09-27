#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int i = 0, j = 0;
	string a, b, c;
	
	cin >> a;
	cin >> b;
	
	c = a + a + a ;
	
	while(i < a.size()){
		
		if(b[0] == c[i]){
			
			for(j = 0; j < b.size(); ++j){
				
				if(b[j] != c[i+j]){
					
					break;
				}
				
				if(j + 1 == b.size()){
					
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
		
		++i;
	}
	
	cout << "No" << endl;
	
	return 0;
}