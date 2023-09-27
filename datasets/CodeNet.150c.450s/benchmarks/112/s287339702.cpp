#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include <string.h>
using namespace std;
int main(){
	while(1){
		int n,m;
		string x,y;
		cin>>n;
		if(n==0)break;
		vector<string> hoge1,hoge2;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			hoge1.push_back(x);
			hoge2.push_back(y);
			//cout<<x<<y<<endl;
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>x;
			bool flag=false;
			for(int j=0;j<n;j++){
				if(x==hoge1[j]){
					cout<<hoge2[j];
					flag=true;
				}
			}
			if(!flag)cout<<x;
		}
		cout<<endl;
	}
	
	return 0;
	
}