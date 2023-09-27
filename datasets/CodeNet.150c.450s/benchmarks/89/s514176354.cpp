#include "bits/stdc++.h"
using namespace std;

int main(){
	vector<int> a(1000000,1);
	a[0]=0;
	a[1]=0;
	for(int i=0;i<a.size();i++){
		if(a[i]==1){
			for(int j=2*i;j<a.size();j+=i){
				a[j]=0;
			}
		}
	}
	
	//for(int i=0;i<a.size();i++)if(a[i]==1)cout<<i<<" ";
	while(1){
		int az,d,n;
		cin>>az>>d>>n;
		if(az==0&&d==0&&n==0)break;
		int i=0;
		while(1){
			if(a[az]==1)i++;
			if(i==n)break;
			az+=d;
		}
		cout<<az<<endl;
	}
	return 0;
}