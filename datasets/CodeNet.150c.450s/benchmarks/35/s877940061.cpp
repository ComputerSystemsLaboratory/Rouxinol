#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n,a[5000],s,ans;
	
	while(1){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i] ;
		}
			if(n==0){
				break;
			}
		ans=0;
		for(int i=1;i<=n;i++){
			for(int j=0;j<=n-i;j++){
				s=0;
				if((a[j]<=0)||(a[j+i-1]<=0)){
					goto A;
				}
				for(int k=j;k<j+i;k++){
					s+=a[k];
				}
				if(ans<s){
					ans=s;
				}
					A:;
			}
		}
		if(ans==0){
			for(int i=1;i<n;i++){
				for(int j=0;j<n-i;j++){
					if(a[j]<a[j+1]){
						s=a[j]; a[j]=a[j+1]; a[j+1]=s;
					}
				}
			}
			ans=a[0];
		}
	cout << ans << "\n" ;
	}
return 0;
}