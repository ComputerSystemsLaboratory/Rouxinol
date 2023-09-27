#include <iostream>
using namespace std;

int main() {
	while(1){
		int n,sum=0;
		cin>>n;
		if(n==0)
			break;
		int s[n];
		for(int i=1; i<=n; i++)
			cin>>s[i];
		for(int i=1; i<=n; i++){
			int v=s[i];
			if(s[i]<=s[1]){
				s[i]=s[1];
				s[1]=v;
			}
			if(s[i]>=s[n]){
				s[i]=s[n];
				s[n]=v;
			}
		}
		for(int i=2; i<=n-1; i++)
			sum+=s[i];
		cout<<sum/(n-2)<<endl;
	}
			
			
				
	
	return 0;
}