#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[101]={},b;
	while(cin>>b){
		if(b==0)break;
		a[b]++;
	}
	b=0;
	for(int i=1;i<=100;i++){
		if(b<a[i]){
			b=a[i];
		}
	}
	for(int i=1;i<=100;i++){
		if(b==a[i]){
			cout<<i<<endl;
		}
	}
	return 0;
}

