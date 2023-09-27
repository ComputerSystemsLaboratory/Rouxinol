#include <iostream>
#define MAX(a,b) (((a)>(b))?(a):(b))
using namespace std;

int main(void){
	int n,k;
	while (cin>>n>>k,n||k) {
		int a[100000];
		int sum=0;
		int m=0;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<k;i++)sum+=a[i];
		m=sum;
		for(int i=k;i<n;i++){
			sum-=a[i-k];
			sum+=a[i];
			m=MAX(sum,m);
		}
		cout<<m<<endl;
	}
	return 0;
}