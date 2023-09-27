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
	long a;
	int L;
	while(cin>>a>>L,a||L){
		map<long,int> aa;
		aa[a]=0;
//		cout<<"a0="<<a<<endl;;
		for(int i=1;;i++){
			a=getMax(a,L)-getMin(a,L);
//			cout<<"a"<<i<<"="<<a<<endl;
			auto it=aa.find(a);
			if(it!=aa.end()){
				cout<<it->second<<" "<<a<<" "<<i-it->second<<endl;
				break;
			}
			aa[a]=i;
		}
	}

	return 0;
}