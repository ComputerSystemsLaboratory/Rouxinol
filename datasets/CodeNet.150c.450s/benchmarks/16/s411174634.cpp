#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

struct pond{
	int am;
	int md;
};

int main(){
	string s;
	stack<int> st;
	deque<pond> qu;
	int total=0;
	cin >> s;
	for(int i=0;i<s.length();++i){
		if(s[i]=='\\'){
			st.push(i);
		} else {
			if(s[i]=='/' && !st.empty()){
				pond p;
				p.md=st.top();
				st.pop();
				p.am=i-p.md;
				total+=p.am;
				while(!qu.empty()){
					pond p2=qu.back();
					if(p.md < p2.md){
						p.am+=p2.am;
						qu.pop_back();
					} else {
						break;
					}
				}
				qu.push_back(p);
			}
		}
	}
	cout << total << endl;
	int len=qu.size();
	if(!len){
		cout << len;
	} else {
	cout << len << " ";
	}
	for(int i=0;i<len-1;++i){
		pond tmp=qu.front();
		cout << tmp.am << " ";
		qu.pop_front();
	}
	if(!qu.empty()){
		pond tmp=qu.front(); 
	    cout << tmp.am;
	}
	cout << endl;
	qu.pop_front();
	return 0;
}