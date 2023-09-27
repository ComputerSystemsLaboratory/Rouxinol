#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c,x;
	while(cin>>n>>a>>b>>c>>x){
		if(n==0&&a==0&&b==0&&c==0&&x==0)break;
		int nr[105];
		for(int i=0;i<n;i++){cin>>nr[i];}
		
		int atar=0;
		int count=0;
		
		while(count<=10001){
			if(x==nr[atar])atar++;
			x=(a*x+b)%c;
			
			if(atar==n)break;
			count++;
			}
			
			if(count>=10001)cout<<"-1"<<endl;
			else cout<<count<<endl;
		}
		return 0;
	}