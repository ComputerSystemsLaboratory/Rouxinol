#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,c=0,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2==0){
			if(a==2) c++;
			continue;
		}
		int j=sqrt(a)+1;
		if(j%2==0) j--;
		while(j>=3){
			if(a%j==0) goto f;
			j=j-2;
		}
		c++;
		f:;
	}
	cout<<c<<endl;
	return 0;
}