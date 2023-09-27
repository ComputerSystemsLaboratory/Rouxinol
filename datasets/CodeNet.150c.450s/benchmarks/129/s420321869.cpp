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
	int r,c;
	cin >> r >> c;
	int table[101][101];
	for(int i=0;i<r;i++){
		int sum=0;
		for(int j=0;j<c;j++){
			cin >> table[i][j];
			sum += table[i][j];
			cout << table[i][j] << " ";
		}
		cout << sum << endl;
	}

	int all=0;
	for(int i=0;i<c;i++){
		int sum = 0;
		for(int j=0;j<r;j++){
			sum += table[j][i];
		}
		all += sum;
		cout << sum << " ";
	}
	cout << all << endl;
	return 0;
}