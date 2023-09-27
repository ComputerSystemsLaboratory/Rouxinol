#include <iostream>
#include <vector>
using namespace std;


int main() {
int n;
while(cin>>n){
	if(n==0) break;

n=1000-n;
int ans=0;
ans=ans+n/500;
n=n%500;

ans=ans+n/100;
n=n%100;

ans=ans+n/50;
n=n%50;

ans=ans+n/10;
n=n%10;

ans=ans+n/5;
n=n%5;
ans=ans+n;
cout<<ans<<endl;
}
	return 0;
}