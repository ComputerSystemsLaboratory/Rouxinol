#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	
	string A;
	int x, y;
	
	while( cin >> A ) {
	
	int n;
	cin >> n;
	
	string Action;
	
	for(int i=0;i<n;i++) {
		
		cin >> Action;
		if( Action == "replace") {
			
			string replaces;
			
			cin >> x >> y >> replaces;
			A.replace(x, y - x + 1 , replaces);
			
		}
		else if( Action == "reverse") {
						
			cin >> x >> y ;
			reverse(A.begin()+x,A.begin()+y+1);
		
		}
		else {
			
			cin >> x >> y;	
			cout << A.substr(x, y - x + 1) << "\n";
			
		}
	}
	
}
	return 0;
}
