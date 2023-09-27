#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	while(1){
	int n,k,x=0,ma=0,p=0,q=0;
	cin>>n>>k;
		q=k-1;
		if(n==0 && k==0)
		break;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
		for(int i=0;i<k;i++){
			x+=a[i];
		}
		ma=max(ma,x);
		for(int i=0;i<n-k;i++){
			q++;
			x+=a[q];
			x-=a[p];
			p++;
			ma=max(ma,x);
		}
	cout<<ma<<endl;
	}
return 0;
}