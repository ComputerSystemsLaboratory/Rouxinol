#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	while(n > 0){
		int a, b, c;
		cin >> a >> b >> c;
		if(a * a + b * b == c * c || b * b + c * c == a * a ||
		  a * a + c * c == b * b)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
		
		-- n;
	}
	
	return 0;
}