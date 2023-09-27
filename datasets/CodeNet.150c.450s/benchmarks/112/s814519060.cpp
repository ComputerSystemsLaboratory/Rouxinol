#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
using namespace std;
int main(){
	
	long long n,m;
	while(cin>>n,n!=0){
		char p,a;
	map<char,char>	t;
		
		for(int i=0;i<n;i++){
			cin>>p>>a;
			t[p]=a;
	}
		string s="";
		cin>>m;
		
		for(int i=0;i<m;i++){
			cin>>p;
			if(!t[p])
				s+=p;
			else
				s+=t[p];
		}
		cout<<s<<endl;
	}
}