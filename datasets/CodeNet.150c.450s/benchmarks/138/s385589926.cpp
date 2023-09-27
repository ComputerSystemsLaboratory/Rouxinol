#include<iostream>
#include<algorithm>
#include<cstdio>
	using namespace std;
int main(){

	int a,b;
	cin>>a>>b;
	while(b!=0){
		
		int x=max(a,b);
		int y=min(a,b);
		a=y;b=x%y;
	}
	cout<<a<<endl;


	return 0;
}