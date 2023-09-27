#include <iostream>
using namespace std;
int main(){
	int n,i,t,a,ma,mi;
	while(cin>>n,n){
		t=ma=0,mi=1000;
		for(i=0;i<n;i++)cin>>a,t+=a,ma=max(ma,a),mi=min(mi,a);
		cout<<(t-ma-mi)/(n-2)<<endl;
	}
}