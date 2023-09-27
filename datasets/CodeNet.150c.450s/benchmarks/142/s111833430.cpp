#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[200005];
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	}
	for(int i=1;i<=n-k;i++){
	    if(a[i+k]>a[i]){
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"No"<<endl;
	}
}
