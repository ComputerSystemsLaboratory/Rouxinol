#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
#include <queue>
#include <stack>

using namespace std;


int main()
{
	int n;
	while(cin>>n,n){

		vector<long> t(24*3600+1,0);
		long res=0;

		for(int i=0;i<n;i++){
			string s;
			cin>>s;

			long a;
			a=((long)(s[0]-'0')*10+(long)(s[1]-'0'))*3600;
			a+=((long)(s[3]-'0')*10+(long)(s[4]-'0'))*60;
			a+=((long)(s[6]-'0')*10+(long)(s[7]-'0'));
			t[a]++;

			cin>>s;
			long b;
			b=((long)(s[0]-'0')*10+(long)(s[1]-'0'))*3600;
			b+=((long)(s[3]-'0')*10+(long)(s[4]-'0'))*60;
			b+=((long)(s[6]-'0')*10+(long)(s[7]-'0'));
			t[b]--;


		}

		for(long i=1;i<t.size();i++) t[i]+=t[i-1];
		for(long i=0;i<t.size();i++) res=max(res,t[i]);
		cout<<res<<endl;

	}

	return 0;
}