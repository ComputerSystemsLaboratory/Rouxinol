#include <bits/stdc++.h>

using namespace std;

void solve(string &s)
{
    int m;
    cin >> m;
    vector<int> H(m);

    for(int i = 0; i < m; i++){
        cin >> H.at(i);
    }

    for(int i = 0; i < m; i++){
        int h = H.at(i);
        s = s.substr(h, s.size()-h) + s.substr(0,h);
    }
    cout << s << endl;
}

int main()
{
    for(;;){
        string s;
        cin >> s;
        if(s == "-") return 0;
        solve(s);
    }
    return 0;
}
