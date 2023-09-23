#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,p;
	while(cin>>n>>m>>p,n){
		int sum=0,num[100];
		for(int i=0;i<n;i++){
			cin>>num[i];
			sum+=num[i];
		}
		if(num[m-1])cout<<(int)(sum*(float)(100-p)/num[m-1])<<endl;
		else cout<<0<<endl;
	}
}