#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	for(int tc=0;tc<n;++tc){
		string s;
		set<string> m;
		cin>>s;
		if(cin.eof())break;
		for(unsigned int i = 1; i < s.length(); ++i){
			string s_front = s.substr(0,i);
			string s_back = s.substr(i,s.length()-i);
			m.insert( s_front + s_back );
			m.insert( s_back + s_front );
			reverse( s_front.begin(), s_front.end() );
			m.insert( s_front + s_back );
			m.insert( s_back + s_front );
			reverse( s_front.begin(), s_front.end() );
			reverse( s_back.begin(), s_back.end() );
			m.insert( s_front + s_back );
			m.insert( s_back + s_front );
			reverse( s_front.begin(), s_front.end() );
			m.insert( s_front + s_back );
			m.insert( s_back + s_front );
		}
		printf("%d\n", m.size());
	}
	return 0;
}