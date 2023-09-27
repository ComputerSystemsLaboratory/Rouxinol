#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int n,m;
char a,b;

int main(){
	while(cin>>n){
		if(n==0)return 0;
		map<char,char> table;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			table[a]=b;
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>a;
			if(table[a]!=0)cout<<table[a];
			else cout<<a;
		}
		cout<<endl;
	}
}