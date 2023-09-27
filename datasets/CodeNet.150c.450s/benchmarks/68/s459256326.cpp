#include<bits//stdc++.h>
using namespace std;
int main(){
	int n;
	int a[1000];
	while(cin>>n&&n!=0){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int m=10000000;
		for(int i=1;i<n;i++){
			m=min(a[i]-a[i-1],m);
		}
		cout<<m<<endl;							
	}
}