#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,s,a;
	while(cin>>n,n){
		cin>>a;
		m=s=a;n--;
		while(n--){
			cin>>a;
			if(s<0)s=a;
			else s+=a;
			m=max(s,m);
		}
		cout<<m<<endl;
	}
}