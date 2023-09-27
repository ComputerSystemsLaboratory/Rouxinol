#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <iomanip>
#include <stack>
#include <list>
#include <unordered_map>
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
  	unordered_map<string, int> S;
  	int idx=0;
  	string instruction, str;
  
  	while(cin >> instruction >> str)
    {
      if(instruction == "insert") S[str] = 1;
      else
      {
        if(S[str] ==1 ) cout << "yes" << endl;
        else cout << "no" << endl;
      }
      idx++;
      if(idx == n) break;
    }
  	return 0;
}

