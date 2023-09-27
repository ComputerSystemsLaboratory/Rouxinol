#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,s,sum,min,max;
	refrain:
	cin>>n;
	if(n==0) return 0;
	min=1001;
	max=-1;
	sum=0;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s>max) max=s;
		if(s<min) min=s;
		sum+=s;
	}
	sum-=max+min;
	sum/=n-2;
	cout<<sum<<endl;
	goto refrain;
}