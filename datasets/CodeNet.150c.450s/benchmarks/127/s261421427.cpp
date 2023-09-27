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
 
const double eps=1e-10;

const int dy[]={-1,-1,0,1,1, 1, 0,-1};
const int dx[]={ 0, 1,1,1,0,-1,-1,-1};

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		string s;
		cin>>s;

		set<string> org;
		for(int i=1;i<s.size();i++){
			string s1=s.substr(0,i);
			string s2=s.substr(i);

			string s1r=s1; reverse(s1r.begin(),s1r.end());
			string s2r=s2; reverse(s2r.begin(),s2r.end());

			org.insert(s1+s2);
			org.insert(s1+s2r);
			org.insert(s1r+s2);
			org.insert(s1r+s2r);

			org.insert(s2+s1);
			org.insert(s2+s1r);
			org.insert(s2r+s1);
			org.insert(s2r+s1r);


		}

		cout<<org.size()<<endl;

	}


	return 0;
}