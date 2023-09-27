#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,minh,maxh;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	minh = a[0];
	maxh = a[1]-a[0];
	for(int i = 1;i<n;i++){
		maxh = max(maxh,a[i]-minh);
		minh = min(minh,a[i]);
		
	}
	cout<<maxh<<endl;
	return 0;
}











/*int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	int syueki = a[1] -a[0];
	for(int i = 0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			syueki = max(syueki,a[j]-a[i]);
		}
	}
	cout<<syueki<<endl;
}*/
