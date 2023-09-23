#include <iostream>
#include <iomanip>
using namespace std;
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<j;i++)

bool has3(int p){
	while(p){
		if(p % 10 == 3) return true;
		p /= 10;
	}
	return false;
}

void call(int n){
	REP(i,1,n + 1){
		if(i % 3 == 0 || has3(i))
			cout << " " << i;
	}
}

int main(void){
	int a;
	cin >> a;
	call(a);
	cout << endl;
}