#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,n;
	string a;
	cin>>a;
	n=a.size();
	for(i=n-1;i>=0;i--){
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}