#include<iostream>
#include<string>
using namespace std;
int main(){
	long long a=100000;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		a*=1.05;
		if(a%1000==0)
			a-=1000;
		a/=1000;
		a*=1000;
		a+=1000;
	}
	cout<<a<<endl;
	return 0;
}