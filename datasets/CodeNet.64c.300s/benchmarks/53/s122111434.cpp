#include<iostream>
using namespace std;

int main(){
	int a,b,c,i,ans=0;
	cin>>a>>b>>c;
	
	for(i=0;i<=10000;i++){
		if(c%a==0)ans++;
		if(a==b)break;
		a++;
	}
	cout<<ans<<endl;
	return 0;
}