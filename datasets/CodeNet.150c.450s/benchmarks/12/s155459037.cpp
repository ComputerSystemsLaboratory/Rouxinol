#include <iostream>
using namespace std;

int main() {
	int n, *h;
	cin>>n;
	h = new int[n];
	for(int i=0;i<n;++i){
		cin>>h[i];
	}
	for(int i=1;i<=n;++i){
		cout<<"node "<<i<<": key = "<<h[i-1]<<", ";
		if(i!=1)cout<<"parent key = "<<h[i/2-1]<<", ";
		if(i*2<=n)cout<<"left key = "<<h[i*2-1]<<", ";
		if(i*2+1<=n)cout<<"right key = "<<h[i*2]<<", ";
		cout<<endl;
	}
	return 0;
}