#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	map<string, int> m;
	string best;
	string longest;
	
	char word[33];
	while(scanf("%s", word) != EOF){
		string s(word);
		if(m.count(s))
			m[s]++;
		else
			m[s] = 1;

		if(m[best] < m[s])
			best = s;
		if(longest.size() < s.size())
			longest = s;
	}
	printf("%s %s\n", best.c_str(), longest.c_str());

	return 0;
}