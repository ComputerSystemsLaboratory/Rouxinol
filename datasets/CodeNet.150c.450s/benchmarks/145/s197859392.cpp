#include<iostream>
#include<map>
#include<string>
#include<stdio.h>

#include<algorithm>

using namespace std;

bool compare(const pair<string, int> T1, const pair<string, int> T2) {
	return T1.second < T2.second;
}

int main (void){

	string str,maxByLength("");
	//map<int,string> X; //¶Ì·³
	map<string,int> Y; //¶Ì
	//int mm;

	while (cin>>str){
		if (str.size()>maxByLength.size())	maxByLength=str;
		Y[str]++;
	}

	// string maxByCount("");
	// int cnt = 0;
	pair<string, int> maxCountPair = *max_element(Y.begin(), Y.end(), compare);

	// cout << (*Y.rbegin()).first << " " << maxByLength << endl;
	// cout << maxByCount << " " << maxByLength << endl;
	cout << maxCountPair.first << " " << maxByLength << endl;

	return 0;

}