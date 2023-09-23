//ALDSC_1
#include<iostream>
using namespace std;
int main(){
	int n;
	int ans=0,tmp;
	bool f;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		f=1;
		for(int j=2;j*j<=tmp;j++){
			if(tmp%j==0)f=0;
		}
		ans+=f;
	}
	cout<<ans<<endl;
	return 0;
}