#include <bits/stdc++.h>

using namespace std;

int main()
{
    string W;
    vector<string> T;

    cin >> W;
    for(;;){
        string s;
        cin >> s;
        if(s == "END_OF_TEXT"){
            break;
        }
        string ss = "";
        for(int i = 0; i < s.size(); i++){
            char c = s.at(i);
            if('A' <= c && c <= 'Z'){
                c = c - 'A' + 'a';
            }
            if('a' <= c && c <= 'z' || c == '-'){
                ss += (char)c;
            }
        }
        T.push_back(ss);
    }

    int sum = 0;
    for(int i = 0; i < T.size(); i++){
        if(W == T.at(i)) sum++;
    }
    cout << sum << endl;
}
