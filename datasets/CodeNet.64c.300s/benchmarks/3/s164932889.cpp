#include <iostream>
#include <iomanip>
using namespace std;
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<j;i++)

int main(){
	int x[100] = {};
	int n;

	cin >> n;

	rep(i,n){
		cin >> x[i];
	}

	rep(i,n){
		if(i != 0) cout << " ";
		cout << x[n-1-i];
	}
	cout << endl;
}