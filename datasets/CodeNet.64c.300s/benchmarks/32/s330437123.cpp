#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main(){
    long long n,a[10001];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
	       if(a[j]>a[j-1]){
	           int t=a[j];
	           a[j]=a[j-1];
	           a[j-1]=t;
	       }
        }
    }
	long long count=0;
	for(int i=0;i<n;i++)
		count+=a[i];
	cout<<a[n-1]<<" "<<a[0]<<" "<<count<<endl;
	return 0;
}