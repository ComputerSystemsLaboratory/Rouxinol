#include<bits/stdc++.h>
using namespace std;
int main(){
	bool arr[30]={};
	int n;
	for(int i=0;i<28;i++){
		cin>>n;
		arr[--n]=1;
	}
	for(int i=0;i<30;i++)
		if(!arr[i])
			cout<<i+1<<endl;
}

