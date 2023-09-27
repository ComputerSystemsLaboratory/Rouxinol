#include <iostream>
#include <cmath>
using namespace std;

int func(int n, int m){
	if(m==n)return 1;
	else{
		int cnt=0;
		for(int i=1;i<=3 && m+i<=n;++i){
			cnt += func(n,m+i);
		}
		return cnt;
	}
}

int main(){
	int n;
	while(cin>>n,n){
		cout << func(n,0)/10/365+1 << endl;
	}
}