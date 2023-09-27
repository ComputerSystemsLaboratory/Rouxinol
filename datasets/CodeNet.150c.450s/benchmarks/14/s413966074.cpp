#include <bits/stdc++.h>
using namespace std;

int f(int n){
	return n>=3&&(n%10==3||f(n/10));
}


int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%3==0||f(i)) cout<<" "<<i;
	}
	cout<<endl;
	return 0;
}