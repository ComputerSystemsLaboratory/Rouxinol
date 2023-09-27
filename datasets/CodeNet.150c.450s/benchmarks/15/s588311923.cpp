#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <iomanip>
#include <stack>
#include <list>
using namespace std;


vector<string> split(const string &s, char delim) {
    vector<string> elems;
    string item;
    for (char ch: s) {
        if (ch == delim) {
            if (!item.empty())
                elems.push_back(item);
            item.clear();
        }
        else {
            item += ch;
        }
    }
    if (!item.empty())
        elems.push_back(item);
    return elems;
}

bool compare_by_b(tuple<int, string, int> a, tuple<int, string, int> b) {
    if(get<2>(a) != get<2>(b)){
        return get<2>(a) > get<2>(b);
    }
}

bool compare_by_string(tuple<int, string, int> a, tuple<int, string, int> b) {
    if(get<1>(a) != get<1>(b)){
        return get<1>(a) < get<1>(b);
    }else{
      	return get<2>(a) > get<2>(b);
    }
}


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
  	cin >> n;
  	list<long> S;
  	int idx=0;
  	long s;
  	while(cin >> s)
    {
      S.push_back(s);
      idx++;
      if(idx == n) break;
    }
  	int q;
  	cin >> q;
  	vector<long> T(q);
  	idx=0;
  	while(cin >> T[idx])
    {
      idx++;
      if(idx == q) break;
    }
  	
  	int count = 0;
  	for(int i=0;i<q;i++)
    {
		for(auto itr = S.begin(); itr != S.end(); ++itr) {
        	if( *itr == T[i] ) 
            {
              count++;
              S.erase(itr);
              break;
            }
        }
    }
  	cout << count << endl;
  	return 0;
}

