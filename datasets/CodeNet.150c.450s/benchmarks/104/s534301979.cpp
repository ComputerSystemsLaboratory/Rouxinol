#include<bits/stdc++.h>
using namespace std;
int main(void){
	int w,n;
	int a,b;
	int i;
	char ch;
	int m[31];
	cin>>w>>n;
	for(i=1;i<=w;i++)	m[i]=i;
	for(i=0;i<n;i++){
		cin>>a>>ch>>b;
		swap(m[a],m[b]);
	}
	for(i=1;i<=w;i++)	cout<<m[i]<<endl;
	return 0;
}

	
		
	
