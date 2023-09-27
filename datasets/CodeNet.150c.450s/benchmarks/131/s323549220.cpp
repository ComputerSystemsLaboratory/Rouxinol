#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>
#include<map>
#include<algorithm>
#include<functional>
using namespace std;
string str;
string maxs,mins;
int l;
map<long long int,int> v;
int main(void){
	while(1){
		long long int res;
		v.clear();
		cin >> str >> l;
		long long int sp;
		stringstream k;
		k << str;
		k >> sp;
		v[sp]=21;
		if(str=="0" && l==0)break;
		int i=1;
		while(1){
			while(str.size()<l)str+="0";
			mins=str;
			sort(mins.begin(),mins.end());
			maxs=mins;
			reverse(maxs.begin(),maxs.end());
			stringstream M;
			stringstream m;
			stringstream st;
			long long int Mn,mn;
			M << maxs;
			M >> Mn;
			m << mins;
			m >> mn;
			res=Mn-mn;
			if(v[res]>0)break;
			else v[res]=i;
			i++;
			st << res;
			st >> str;
		}
		if(v[res]==21)v[res]=0;
		cout << v[res] << " " << res << " " << i-v[res] << endl;
	}
    return 0;
}