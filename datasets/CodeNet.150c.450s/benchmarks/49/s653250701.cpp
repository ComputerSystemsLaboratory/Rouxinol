#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		int table[n];
		
		for(int i=0;i<n;i++)cin>>table[i];
		sort(table,table+n);
//		cout<<table[1];
		for(int i=2;i<n-1;i++){
			table[1]+=table[i];
//			cout<<" "<<table[i];
		}
//		cout<<endl;
		cout<<table[1]/(n-2)<<endl;
	}
}