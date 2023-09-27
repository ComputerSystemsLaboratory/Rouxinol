#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	int a[250];
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	// make_heap(a,a+n);
	for(int i=0;i<n;i++){
		cout<<"node "<<i+1<<": key = "<<a[i]<<", ";
		if(i!=0)cout<<"parent key = "<<a[(i-1)/2]<<", ";
		if(2*i+1<n)cout<<"left key = "<<a[2*i+1]<<", ";
		if(2*i+2<n)cout<<"right key = "<<a[2*i+2]<<", ";
		cout<<endl;
	}
	return 0;
}