#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n,a,b,c,x,y[100]={0};
	while(1){
		cin>>n>>a>>b>>c>>x;
		if(n==0&&a==0&&b==0&&c==0&&x==0)break;

		for(int i=0;i<n;i++) cin>>y[i];
		
		int cnt=0;
		int i=0;
		while(1){
			//cout<<x<<endl;
			if(x==y[i])i++;
			cnt++;
			if(cnt>10000||i==n)break;
			x=(a*x+b)%c;
		}
		if(i==n)cout<<cnt-1<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}