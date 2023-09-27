#include <iostream>
using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<n;i++)

int main(){
	int a, b;
	cin >> a >> b;
	if(a > b)
		cout << "a > b" << "\n";
	else if(a < b)
		cout << "a < b" << "\n";
	else
		cout << "a == b" << "\n";

	return 0;
}