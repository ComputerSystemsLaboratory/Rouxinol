#include <bits/stdc++.h>
using namespace std;

int a[1010];

int main(){
	int n,min;
	while(1){
		cin>>n;
		if(n==0) break;
		min=10000000;
		for(int i=0;i<n;i++) cin>>a[i];
		int f=1;
		while(f!=0){
			f=0;
			for(int j=0;j<n-1;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					f++;
				}
			}
		}
		for(int i=n-1;i>0;i--){
			if(min>a[i]-a[i-1]) min=a[i]-a[i-1];
		}
		cout<<min<<endl;
	}
	return 0;
}
