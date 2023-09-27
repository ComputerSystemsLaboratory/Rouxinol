#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int x[31]={0};
	int a;
	while(cin>>a)
		x[a]=1;

	for(int i=1;i<=30;i++)
		if(x[i]==0)
			cout<<i<<endl;

	return 0;
}