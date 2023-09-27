#include<iostream>
#include<string>
using namespace std;
int main(){
	long long n,h=1;
	cin>>n;
	for(int i=n;i>1;i--)
		h*=i;
	cout<<h<<endl;
	return 0;
}