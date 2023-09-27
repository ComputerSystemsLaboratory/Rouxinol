#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> W(26, 0);

    string s = "";
    string s0;
    while(cin >> s0){
        s += s0;
    }

    for(int i = 0; i < s.size(); i++){
        char c = s.at(i);
        if('A' <= c && c <= 'Z'){
            c = c - 'A' + 'a';
        }
        if('a' <= c && c <= 'z'){
            W.at(c-'a') += 1;
        }
    }
    for(int i = 0; i < W.size(); i++){
        cout << (char)('a' + i) << " : " << W.at(i) << endl;
    }

}
