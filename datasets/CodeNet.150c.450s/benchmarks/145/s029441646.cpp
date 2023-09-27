#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;

int main()
{
//	cut here before submit 
//	freopen("testcase.es", "r", stdin);
	string str = "";

	while ( getline (cin, str ) ){

		map <string, int> freq, leng;
		if (str.find('.') != string::npos){
			str = str.erase (str.find('.'), 1);
		} // end if
		stringstream ss(str);
		string s = "";

		while (ss >> s){
			++freq[s];
			leng[s] = s.length();
		} // end while

		if (freq.size() == 2){
			cout << "The two words separated by a space." << endl;
			continue;
		} // end if		
		if (!freq.empty() && !leng.empty() ){ 
			multimap <int, string, greater<int> > rank;
			map <string, int>::iterator itf = freq.begin();
			for (; itf != freq.end(); ++itf){
				rank.insert (make_pair ((*itf).second, (*itf).first ) );
			} // end for
			multimap<int, string, greater<int> > mlen;
			map<string, int>::iterator itl = leng.begin();
			for (; itl != leng.end(); ++itl){
				mlen.insert (make_pair ((*itl).second, (*itl).first ) );
			} // end for
			multimap<int, string, greater<int> >::iterator itr = rank.begin();
			multimap<int, string, greater<int> >::iterator itm = mlen.begin();
			cout << (*itr).second << ' ' << (*itm).second << endl;
		} // end if
	} // end while
		
	return 0;
}