#include<iostream>
using namespace std;
int main(){
	int n,y,m,d,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		ans=0;
		cin>>y>>m>>d;
		ans+=(y-1)/3*590+(y-1)%3*195;
		if(y%3==0)
			ans+=(m-1)*20+d-1;
		else
			ans+=(m-1)/2*39+(m-1)%2*20+d-1;
		cout<<196470-ans<<endl;
	}
	return 0;
}