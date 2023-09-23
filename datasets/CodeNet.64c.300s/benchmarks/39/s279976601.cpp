#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int main(void){
	int n;
	int count[51];

	rep(i,51) count[i] = 0;
	rep(a,10)rep(b,10)rep(c,10)rep(d,10){
		count[a+b+c+d]++;
	}

	while(cin>>n){
		cout<<count[n]<<endl;
	}

	return 0;
}