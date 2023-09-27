#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=sqrt(n);i++){
		for(int j=1;j<=sqrt(n);j++){
			for(int k=1;k<=sqrt(n);k++){
				int temp=i*i+j*j+k*k+i*j+i*k+j*k;
				if(temp<=n){
					a[temp]++;
				}
			}
		}
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<endl;
}