#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int d=-2000000000;
	for(int i=0; i<n; i++)  cin>>a[i];
	int mi=a[0];
	for(int i=1; i<n; i++){
	    d=max(a[i]-mi, d);
	    if(mi>a[i]) mi=a[i];
	}
	cout<<d<<endl;
	return 0;
}
