#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)

int main(){
	while(1){
		int n,r;
		cin>>n>>r;
		if(n==0&&r==0) break;
		int a[50],b[50];
		lp(i,50){
			a[i]=i+1;
			b[i]=-1;
		}
		lp(i,r){
			int p,c;
			cin>>p>>c;
			lp(j,p){
				b[n-p-c+1+j]=a[n-p+1+j];
			}
			lp(j,c){
				b[n-c+j]=a[n-p-c+1+j];
			}
			lp(j,n){
				if(b[j]!=-1){
					a[j]=b[j];
				}
			}
			lp(j,50){
				b[j]=-1;
			}
		}
		cout<<a[n-1]<<endl;
	}
	return 0;
}
