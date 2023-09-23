#include<iostream>
#include<cmath>
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;

int main(){
	int num[101]={0};
	int a,maxin=0;
	while(cin>>a){
		num[a]++;
		maxin=max(maxin,num[a]);
	}
	rep(i,101){
		if(num[i]==maxin)cout<<i<<endl;
	}
	return 0;
}