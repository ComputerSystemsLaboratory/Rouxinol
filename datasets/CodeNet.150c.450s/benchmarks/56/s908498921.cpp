#include<iostream>
#include<cstdio>
long long int sum=0;
using namespace std;
int main(){
	int n,a;
	int min=1000001,max=-10000001,i;
	cin >> n;
	if(n==0) cout << 0<<' '<<0<<' '<<0<<endl;
	else {
		for(i=0;i<n;i++){
			cin>>a;
			if(a < min) min=a;
			if(a > max) max=a;
			sum+=a;
		}
		cout << min <<' '<< max/*<<' '<< sum<<endl*/;
		printf(" %lld\n",sum);
	}
	return 0;
}