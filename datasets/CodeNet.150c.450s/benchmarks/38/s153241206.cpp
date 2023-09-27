#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		int d = max(max(a,b),c);
		int e = min(min(a,b),c);
		int f = a+b+c-d-e;
		if(d*d==e*e+f*f) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}