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

using namespace std;

long getMin(long x,int L)
{
	stringstream ss;
	ss<<x;
	string s=ss.str();
	ss.str("");
	ss.clear(stringstream::goodbit);

	while(s.size()!=L) s+='0';

	sort(s.begin(),s.end());
	ss<<s;

	long res;
	ss>>res;
//	cout<<"Min:"<<res<<endl;
	return res;
}

long getMax(long x,int L)
{
	stringstream ss;
	ss<<x;
	string s=ss.str();
	ss.str("");
	ss.clear(stringstream::goodbit);

	while(s.size()!=L) s+='0';

	sort(s.begin(),s.end());
	reverse(s.begin(),s.end());
	ss<<s;

	long res;
	ss>>res;

//	cout<<"Max:"<<res<<endl;
	return res;
}

int main()
{

	int n;
	long long m;
	while(cin>>n>>m,n){
		vector< pair<int,int> > vp(n);
		for(int i=0;i<n;i++){
			cin>>vp[i].second>>vp[i].first;
		}
		sort(vp.begin(),vp.end());
		reverse(vp.begin(),vp.end());

		long res=0;
		for(int i=0;i<n;i++){
			if(vp[i].second<=m){m-=vp[i].second; vp[i].second=0;}
			else {vp[i].second-=m; m=0;}
//			cout<<vp[i].first*vp[i].second<<endl;
			res+=vp[i].first*vp[i].second;
		}
		cout<<res<<endl;

	}

	return 0;
}