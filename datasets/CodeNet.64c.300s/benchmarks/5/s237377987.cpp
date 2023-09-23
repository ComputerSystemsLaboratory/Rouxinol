#include <bits/stdc++.h>

using namespace std;
int a[12];
int main(){
	for(int i=1; i<=10;i++){
		cin>>a[i];
	}
	sort(a+1, a+11);
	cout<<a[10]<<endl;
	cout<<a[9]<<endl;
	cout<<a[8]<<endl;
}

