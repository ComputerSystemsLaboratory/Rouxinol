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
 
using namespace std;
 
const double eps=1e-10;
 
int main()
{
	map<string,int> m;
	int fre=0,len=0;
	string s,s_fre,s_len;

	while(cin>>s){
		m[s]++;
		if(s.size()>len){
			s_len=s;
			len=s.size();
		}
		if(m[s]>fre){
			s_fre=s;
			fre=m[s];
		}
	}

	cout<<s_fre<<" "<<s_len<<endl;


	return 0;
}