#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
	int a;
	vector<int> in;
	while(scanf("%d",&a)!=EOF){
		if(a==0)	break;
		in.push_back(a);
	}
	map<int,int> dic;
	for(int it:in)	dic[it]++;
	int num=0;
	for(auto it:dic)	num=max(num,it.second);
	for(auto it:dic){
		if(num==it.second)	cout<<it.first<<endl;
	}
	return 0;
}