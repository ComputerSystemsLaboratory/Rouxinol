#include <iostream>
using namespace std;

bool search(int a[], int n, int t){
	a[n] = t;
	int i=0;
	while(a[i] != t){
		i++;
	}
	return (i != n);
}

int main() {
	int n1;
	cin>>n1;
	
	int s[n1];
	for(int i=0 ; i<n1 ; i++){
		cin>>s[i];
	}
	
	int n2;
	cin>>n2;
	
	int t,ans=0;
	for(int i=0 ; i<n2 ; i++){
		cin>>t;
		if(search(s,n1,t)) ans++;
	}
	
	cout<<ans<<endl;
	
	return 0;
}