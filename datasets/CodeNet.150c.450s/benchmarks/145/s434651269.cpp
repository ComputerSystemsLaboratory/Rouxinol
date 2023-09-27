#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int main() {
    vector<string> words;
    string s;
    while(cin >> s) words.push_back(s);
    string longest;
    int longestlen = 0;
    REP(i,words.size()) {
        if (words[i].size() > longestlen) {
            longest = words[i];
            longestlen = words[i].size();
        }
    }
    
    map<string, int> mp;
    string frequent;
    int frequency = 0;
    REP(i,words.size()) {
        mp[words[i]] = 0;
    }
    REP(i,words.size()) {
        mp[words[i]]++;
        if (mp[words[i]] > frequency) {
            frequent = words[i];
            frequency = mp[frequent];
        }
    }
    
    cout << frequent << " " << longest << endl;

    return 0;
}