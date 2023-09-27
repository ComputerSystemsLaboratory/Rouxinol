#include<iostream>
#include<sstream>
#include<fstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
	map<int,int> table;
	int n,maxi = 0;
	while(scanf("%d",&n)==1){
		table[n]++;
		maxi = max(maxi,table[n]);
	}
	for(map<int,int>::iterator it = table.begin();it!=table.end();++it){
		if(it->second == maxi){
			cout<<it->first<<endl;
		}
	}	
	return 0;
}