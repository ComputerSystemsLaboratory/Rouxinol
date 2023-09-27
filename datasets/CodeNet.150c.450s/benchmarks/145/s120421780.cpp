#include<iostream>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;

int main (void){

	string str,maxByLength("");
	//map<int,string> X; //¶Ì·³
	map<string,int> Y; //¶Ì
	//int mm;

	while (cin>>str){
		if (str.size()>maxByLength.size())	maxByLength=str;
		Y[str]++;
	}

	string maxByCount("");
	int cnt = 0;
	for(map<string, int>::iterator it = Y.begin(); it != Y.end(); ++it) {
		if(it->second > cnt) {
			maxByCount = it->first;
			cnt = it->second;
		}
	}

	cout << maxByCount << " " << maxByLength << endl;

	// cout << (*Y.rbegin()).first << " " << maxByLength << endl;
	return 0;

}