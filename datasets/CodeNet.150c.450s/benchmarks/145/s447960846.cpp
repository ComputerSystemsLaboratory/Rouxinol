#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> mp;
    string w, word, mw;
    while (cin >> word) {
        mp[word]++;
        if (mp[word] > mp[mw]) mw = word;
        if (word.size() > w.size()) w = word;
    }
    cout << mw << " " << w << endl;
    return 0;
}