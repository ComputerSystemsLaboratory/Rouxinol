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
	int n,m;
	int vvi[2][100][100];
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> vvi[0][i][j];
		}
	}
	for(int i=0;i<m;i++){
		cin >> vvi[1][i][0];
	}

	for(int i=0;i<n;i++){
		int ret = 0;
		for(int j=0;j<m;j++){
			ret += vvi[0][i][j]*vvi[1][j][0];
		}
		cout << ret << endl;
	}

	return 0;
}