#include <iostream>
using namespace std;
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<j;i++)

int main(void){
	int a,b;

	while(1){

		cin >> a >> b;
		if(a == 0 && b == 0) break;

		if(a < b){
			cout << a << " " << b << endl;
		} else {
			cout << b << " " << a << endl;
		}
	}

	return 0;
}