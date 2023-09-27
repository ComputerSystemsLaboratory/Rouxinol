#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int a,min=10000000,sa,i;
	
	while(1){
		cin >> a;
		
		if(a==0) break;
		
		int b[a];
		
		for(i=0;i<a;i++){
			cin >> b[i];
		}
		
		sort(b,b+a);
		
		for(i=0;i<a-1;i++){
			
			sa=b[i+1]-b[i];
			
			if(min>sa) min=sa;
			
		}
		
		cout << min << endl;
		min=10000000;
	}
	
	return 0;
}