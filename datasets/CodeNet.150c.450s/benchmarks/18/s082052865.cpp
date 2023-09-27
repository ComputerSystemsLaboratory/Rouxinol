#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a=100000;
	while(cin>>n){
		for(int i=1;i<=n;i++){
			int b=a*0.05;
			if(b%1000)
				b=(b/1000+1)*1000;
			a+=b;
		}
		cout<<a<<endl;
	}
	return 0;
}