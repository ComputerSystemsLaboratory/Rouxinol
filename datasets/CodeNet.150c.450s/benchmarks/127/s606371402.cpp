#include <bits/stdc++.h>

using namespace std;

int calc(string s)
{
    set<string> sset;
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        string fst(s, 0, i), snd(s, i, n-i);
        string rfst(fst.rbegin(), fst.rend()), rsnd(snd.rbegin(), snd.rend());
        sset.insert(fst+snd);
        sset.insert(snd+fst);
        sset.insert(fst+rsnd);
        sset.insert(rsnd+fst);
        sset.insert(rfst+snd);
        sset.insert(snd+rfst);
        sset.insert(rfst+rsnd);
        sset.insert(rsnd+rfst);
    }
    return sset.size();
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        cout << calc(s) << endl;
    }
}