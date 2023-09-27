#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <climits>
using namespace std;

void solve(string s)
{
    set<string> answer;
    answer.insert(s);

    for(unsigned i=1; i<s.size(); ++i){
        string s1 = s.substr(0, i);
        string s2 = s.substr(i);
        string sr1 = s1;
        string sr2 = s2;
        reverse(sr1.begin(), sr1.end());
        reverse(sr2.begin(), sr2.end());
        answer.insert(s1 + sr2);
        answer.insert(sr1 + s2);
        answer.insert(sr1 + sr2);
        answer.insert(s2 + s1);
        answer.insert(s2 + sr1);
        answer.insert(sr2 + s1);
    }

    reverse(s.begin(), s.end());
    answer.insert(s);

    cout << answer.size() << endl;
}

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        string s;
        cin >> s;
        solve(s);
    }
}