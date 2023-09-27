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
	int mat[2][101][101];
	int n,m,l;
	cin >> n >> m >> l;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> mat[0][i][j];
	for(int i=0;i<m;i++)
		for(int j=0;j<l;j++)
			cin >> mat[1][i][j];

	for(int i=0;i<n;i++){
		for(int j=0;j<l;j++){
			long long sum=0;
			for(int k=0;k<m;k++){
				sum += mat[0][i][k]*mat[1][k][j];
			}
			cout << sum;
			if(j!=l-1)cout << " ";
		}
		cout << endl;
	}

	return 0;
}