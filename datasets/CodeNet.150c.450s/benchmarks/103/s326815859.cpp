#include <iostream>
using namespace std;

int work(int n, int s, int x){
	if(n == 1 && s == x)
		return 1;

	if(x<0)
		return 0;

	if(n>0)
		if(s>=0)
			return work(n-1,s-x,x-1) + work(n,s,x-1);
		
	return 0;
}

int main(){
	int n,s,ans;
	while(cin>>n>>s){
		if(n==0 && s==0) break;
		ans = work(n, s, 9);
		cout<<ans<<endl;
	}
	return 0;
}