#include<bits//stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n&&n!=0){
		int a[100];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int sum=0;
		for(int i=1;i<n-1;i++){
			sum+=a[i];
		}
		sum/=floor((n-2));
		cout<<sum<<endl;
	}
}