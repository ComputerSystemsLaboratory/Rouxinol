#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	int a[500000];
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	make_heap(a,a+n);
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<endl;
	return 0;
}