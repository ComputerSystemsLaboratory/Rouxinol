#include<iostream>
using namespace std;
int main(void)
{
	int a,b;
	while(1){
		cin>>a>>b;
		if(a==0 && b==0) break;
		if(a<b) cout<<a<<" "<<b<<endl;
		else cout<<b<<" "<<a<<endl;
	}
	return 0;
}
