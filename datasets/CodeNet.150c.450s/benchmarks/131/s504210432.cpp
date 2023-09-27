#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<functional>
#include<map>
#include<set>
#include<math.h>
#include<string>
#include<stack>
#include<sstream>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

map<string,int> data;

int L;
string a;

string add_zero(string str) {
	while (L!=str.size())
	{
		str="0"+str;
	}
	return str;
}

string next_str(string str) {
	int mini,maxi;
	sort(str.begin(),str.end());
	istringstream is1(str);
	is1>>mini;

	sort(str.rbegin(),str.rend());
	istringstream is2(str);
	is2>>maxi;
	ostringstream os;
	os<<(maxi-mini);
	return add_zero(os.str());

}

int str_to_int(string str) {
	int n;
	istringstream is(str);
	is>>n;
	return n;
}

void solve() {
	int cnt=1;
	string str = add_zero(a);
	
	data.clear();
	data.insert(make_pair(str,0));


	str=next_str(str);
	while (true)
	{
		if(data.find(str)!=data.end()) break;

		data.insert(make_pair(str,cnt));
		str=next_str(str);
		cnt++;
	}

	cout<<data[str]<<" "<<str_to_int(str)<<" "<<cnt-data[str]<<endl;

}

int main() {
	while(cin>>a>>L) {
		if(a=="0"&&L==0) return 0;
		solve();
	}

	return 0;
}