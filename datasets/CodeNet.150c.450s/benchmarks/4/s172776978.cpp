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
		int m,f,r;
		cin >> m >> f >> r;
		if(m==-1 && f==-1 && r==-1)break;
		if(m==-1 || f==-1)cout << "F" << endl;
		else if(m+f>=80)cout << "A" << endl;
		else if(m+f>=65)cout << "B" << endl;
		else if(m+f>=50)cout << "C" << endl;
		else if(m+f>=30){
			if(r>=50)cout << "C" << endl;
			else cout << "D" << endl;
		}
		else cout << "F" << endl;
	}
	return 0;
}