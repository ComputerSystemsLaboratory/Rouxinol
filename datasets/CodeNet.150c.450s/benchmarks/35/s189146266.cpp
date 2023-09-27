#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	int a[5000];
	while(cin>>n,n){
		for(int i=0;i<n;i++)cin>>a[i];
		int sum=0;
		int m=a[0];
		for(int i=0;i<n;i++){
			sum+=a[i];
			m=max(m,sum);
			sum= sum>=0 ? sum : 0;
		}
		cout<<m<<endl;
	}
	return 0;
}