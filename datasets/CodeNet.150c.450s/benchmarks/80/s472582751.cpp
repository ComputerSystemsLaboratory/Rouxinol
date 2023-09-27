#include <bits/stdc++.h>
using namespace std;
int main(){
	int a=0,b=0,tmp;
	for(int i=0;i<4;i++){
		cin>>tmp;
		a+=tmp;
	}
	for(int i=0;i<4;i++){
		cin>>tmp;
		b+=tmp;
	}
	cout<<max(a,b)<<endl;
}