#include <iostream>
using namespace std;

int main(){
	int x;
	int sum = 0;
	
	for (;;){
		cin >> x;
		if ( x == 0 ) break;
			sum += 1;
			cout << "Case " << sum << ": " << x << endl;
			
	}
	
return 0;
}
