#include<iostream>
using namespace std;

int main(){

	int a,b,c,n;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> a >> b >> c;
		if(a*a+b*b==c*c) cout << "YES" << endl;
		else if(a*a+c*c==b*b) cout << "YES" << endl;
		else if(b*b+c*c==a*a) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}