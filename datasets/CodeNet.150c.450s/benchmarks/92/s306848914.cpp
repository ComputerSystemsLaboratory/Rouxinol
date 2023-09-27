#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int sum=a+b,cnt=0;
		while(sum)	sum/=10,cnt++;
		cout<<cnt<<endl;
	}
	return 0;
}