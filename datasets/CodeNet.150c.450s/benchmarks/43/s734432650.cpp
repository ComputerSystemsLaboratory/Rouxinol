#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n,n){
		int a,b,ar = 0,br = 0;
		while(n--){
			cin >> a >> b;
			ar += a>b?a+b:a==b?a:0;
			br += b>a?a+b:a==b?b:0;
		}
		cout << ar << " " << br << endl;
	}
	return 0;
}