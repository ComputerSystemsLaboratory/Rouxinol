#include <iostream>
using namespace std;

int main() {
	int n=0;
	while(cin >> n){
		if(n==0)	break;
		int ans=0,m=0;
		while(m<600){
			ans+=m*m*n;
			m+=n;
		}
		cout << ans <<endl;
	}
	return 0;
}