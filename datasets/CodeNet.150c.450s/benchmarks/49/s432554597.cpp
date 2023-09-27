#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while(cin>>n){
	int c;
	if(n==0){
		break;
	}
	int ma=0,mi=2000,ans=0;
	for(int i=0;i<n;i++){
		cin>>c;
		ans+=c;
		ma=max(ma,c);
		mi=min(mi,c);
	}
	cout<<(ans-mi-ma)/(n-2)<<endl;
	}
	return 0;
}