#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<map>
using namespace std;


int main(){
	int n;
	cin>>n;
	long long min_x=2000000000;
	long long ans=-5000000000;
	for(int i=0;i<n;i++){
		long long  x;
		cin>>x;
		if(x-min_x>ans)ans=x-min_x;
		min_x=min(x,min_x);
	}
	cout<<ans<<endl;
}