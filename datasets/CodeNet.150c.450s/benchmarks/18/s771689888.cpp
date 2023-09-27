#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,i;
	unsigned long long kane=100000;
	cin>>n;
	for(i=0;i<n;i++){
		kane=kane*1.05;
	kane=((kane+999)/1000)*1000;
	}
	cout<<kane<<endl;
	return 0;
}