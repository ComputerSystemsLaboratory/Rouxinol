#include<bits//stdc++.h>
using namespace std;
bool s[1000002];
int main(){
	fill(s,s+1000001,true);
	s[0]=false;
	s[1]=false;
	for(int i=0;i<=1000000;i++){
		if(s[i]){
			int j=2;
			while(i*j<=1000000){
				s[i*j]=false;
				j++;
			}
		}
	}
	int a,b,n;
	while(cin>>a>>b>>n&&a!=0&&b!=0&&n!=0){
		int c=a;
		int sum=0;
		while(sum<n){
			if(s[c]){
				sum++;
			}
			c+=b;
		}
		cout<<c-b<<endl;
	}
}