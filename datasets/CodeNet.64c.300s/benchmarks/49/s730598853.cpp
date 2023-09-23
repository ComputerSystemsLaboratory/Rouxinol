#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,keta;
	while(cin>>a>>b){
		keta = 1;
		a = a+b;
		while(a /= 10){
			keta++;
		}

		cout<<keta<<endl;
	}
	return 0;
}