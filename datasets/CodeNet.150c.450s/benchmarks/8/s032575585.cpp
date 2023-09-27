#include<iostream>
#include <string>
using namespace std;

int n,a,b;

int main() {
	string t,h;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> t >> h;

		if( t>h ){
			a+=3;
		}else if( h>t ){
			b+=3;
		}else{
			a+=1;
			b+=1;
		}
	}
	
	cout << a << ' ' << b << "\n";
    return 0;
}