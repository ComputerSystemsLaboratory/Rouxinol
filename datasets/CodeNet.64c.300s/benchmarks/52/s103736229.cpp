#include<iostream>
#include<cstdio>
using namespace std;
int sum,n,s;
void func(int np,int nn,int pre){
	if(np==s&&nn==n)
		sum++;
	else
	if(nn<n)
	for(int i=pre+1;i<10;i++)
		if(np+i<=s)
			func(np+i,nn+1,i);
}
int main(){
	while(cin>>n>>s,n||s){
		sum=0;
		func(0,0,-1);
		cout<<sum<<endl;
	}
	return 0;
}