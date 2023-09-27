#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define pi 3.141592653589793283462   
int main(){
    int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		if(n-1-i!=0)
		cout<<a[n-1-i]<<" ";
		else
			cout<<a[0]<<endl;
	return 0;
}
//AAAAAAAAAAA!