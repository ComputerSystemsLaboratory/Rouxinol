#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(){
	int a[10000],b[10000],n,s,m,p,M;
	while(cin>>n,n){
		m=INT_MIN;p=0;M=INT_MIN;
		for(int i=0;i<n;i++){
			cin>>a[i];
			M=max(M,a[i]);
			if(a[i]>=0)p=1;
		}
		if(p==0)m=M; else
		for(int i=1;i<=n;i++){
			for(int j=0;j<n-i+1;j++){
				if(a[j]<0||a[j+i-1]<0)continue;
				s=0;
				for(int k=0;k<i;k++){
					s+=a[j+k];
				}
				m=max(m,s);
			}
		}
		cout<<m<<endl;
	}
}