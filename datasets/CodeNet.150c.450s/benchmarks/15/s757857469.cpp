#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n,q,ans;
int main(){
	cin>>n;
    int S[n];
    for(int i=0;i<n;i++){
    	cin>>S[i];
	}
	cin>>q;
	int T[q];
	for(int i=0;i<q;i++){
		cin>>T[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			if(S[i]==T[j]){
				ans++;
				T[j]=-1236824;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
} 
