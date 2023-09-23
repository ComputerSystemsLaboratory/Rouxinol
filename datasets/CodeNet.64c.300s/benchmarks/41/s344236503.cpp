#include<iostream>
#include<algorithm>
using namespace std;
int n,a[4<<17],i;
int main(){
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	make_heap(a,a+n);
	for(i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<endl;
	return 0;
}

