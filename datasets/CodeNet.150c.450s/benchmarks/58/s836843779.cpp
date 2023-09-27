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
#include <cctype>
#include <stack>
 
using namespace std;

int main()
{
	long long res=0;
	stack<long long> sta;

	string s;
	while(cin>>s){
//		cout<<s<<endl;
		if(s[0]<'0'){
			long long a,b;
			a=sta.top(); sta.pop();
			b=sta.top(); sta.pop();
			if(s[0]=='+') sta.push(a+b);
			else if(s[0]=='-') sta.push(b-a);
			else if(s[0]=='*') sta.push(a*b);
			else sta.push(b/a);
		}else{
			sta.push(atol(s.c_str()));
		}
	}

	cout<<sta.top()<<endl;

	return 0;
}