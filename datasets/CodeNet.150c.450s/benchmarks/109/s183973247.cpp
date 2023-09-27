#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	string s1,s2;
	int cnt;
	int max;

	while(1){
		cin>>n;
		if(n==0) break;

		vector<pair<string,int> > v;

		for(int i1=0;i1<n;i1++){
			cin>>s1>>s2;
			v.push_back(make_pair(s1,1));
			v.push_back(make_pair(s2,0));
		}

		cnt=0;
		max=0;
		sort(v.begin(), v.end());
		for(int i1=0; i1<v.size();i1++){
			if(v[i1].second==1) cnt++;
			else if(v[i1].second==0) cnt--;

			if(max<cnt) max=cnt;
		}

		cout<<max<<endl;
	}
	return 0;
}