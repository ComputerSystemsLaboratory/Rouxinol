/*
 * hoge.cpp
 *
 *  Created on: 2014/09/30
 *      Author: eiichi
 */
#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<map>
#include<list>
using namespace std;

vector<int> split(string s,char c){
	vector<int> v;string tmp;
	for(int i=0;i<s.size();i++){
		if(s[i]==c){
			v.push_back(stoi(tmp));
			tmp ="";
		}
		else tmp += s[i];
	}
	if(tmp!="")v.push_back(stoi(tmp));
	return v;
}

int main(void){
	for(int i=0;;i++){
		int n,x;
		cin >> n >> x;
		if(n==0 && x==0)break;
		int cnt=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					if(i+j+k==x)cnt++;
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}