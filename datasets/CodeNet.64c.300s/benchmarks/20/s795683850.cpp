#include<iostream>

using namespace std;
int solve(int d){
	int ret=0;
	for(int i=d;i<=600-d;i+=d)
		ret+=i*i*d;
	return ret;
}

int main(){
	int d;
	while(cin>>d){
		cout<<solve(d)<<endl;
	}
}