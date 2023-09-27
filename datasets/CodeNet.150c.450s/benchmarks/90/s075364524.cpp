#include <bits/stdc++.h>
using namespace std;

int main(){
	int t[102]={},tmp,k = 0,i;
	while(cin>>tmp){
		t[tmp+1]++;
		if(t[tmp+1]>k){
			k = t[tmp+1];
		}
	}
	for(i = 1;i <= 102;i++){
		if(t[i] == k){
			cout<<i-1<<endl;
		}
	}
	return 0;
}