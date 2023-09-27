#include <iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int r[] = {1,1,2};
	if( n<=2 ){
		cout<<r[n]<<endl;
		return 0;
	}
	while( n>0 ){
		int tmp = r[1] + r[2];
		r[0] = r[1]; r[1] = r[2]; r[2] = tmp;
		n = n-1;
	}
	cout<<r[0]<<endl;
	return 0;
}