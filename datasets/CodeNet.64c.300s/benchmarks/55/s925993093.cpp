#include <iostream>
using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<j;i++)

int main(void){

	int A = 0;
	int x[10005] = {0};

	while(1){
		cin >> x[A];
		if(x[A] == 0) break;
		A++;
	}

	rep(i,A){
		cout << "Case "<< i + 1 << ": " << x[i] << "\n";
	}
}