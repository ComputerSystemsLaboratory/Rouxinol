#include<bits/stdc++.h>
using namespace std;

bool isprime(int a){
	for(int i=2;i*i<=a;i++){
		if(a%i==0)return false;
		}
		return a!=1;
	}

int main(){
	int a,d,n;
	
	while(cin>>a>>d>>n,a,d,n){
		int b=0;
		
		while(1){
			if(isprime(a)){
				b++;
			}	
			
			if(b==n)break;
			a+=d;
			}
			
			cout<<a<<endl;
		}
		
	return 0;
	}