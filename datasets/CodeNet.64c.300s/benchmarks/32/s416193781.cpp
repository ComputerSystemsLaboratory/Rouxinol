#include<iostream>
#include<string>
using namespace std;
int main(){
	long long n,a[10001],b,s,h;
	cin>>n>>a[0];
	b=a[0],s=a[0],h=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(a[i]>b)
			b=a[i];
		if(a[i]<s)
			s=a[i];
		h+=a[i];
	}
	cout<<s<<" "<<b<<" "<<h<<endl;
	return 0;
}