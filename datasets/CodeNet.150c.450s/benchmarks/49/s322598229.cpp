#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin>>n,n){
		int num[1001]={};
		for(int i=0;i<n;i++){
			cin>>num[i];
			num[1000]+=num[i];
		}
		sort(num,num+n);
		cout<<(num[1000]-num[0]-num[n-1])/(n-2)<<endl;
	}
}