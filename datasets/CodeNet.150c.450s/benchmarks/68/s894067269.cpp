#include <iostream>
#include <cmath>
#define MIN(a,b) ((a>b)?(b):(a))
using namespace std;

int main(void){
	int n;
	int a[1000];
	while(cin>>n,n){
		int d=99999999;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				d=MIN(d,abs(a[i]-a[j]));
			}
		}
		cout<<d<<endl;
	}
	return 0;
}