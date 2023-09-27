#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        char c = s.at(i);
        if('a' <= c && c <= 'z'){
            c = c - 'a' + 'A';
        }else if('A' <= c && c <= 'Z'){
            c = c - 'A' + 'a';
        }
        s.at(i) = c;
    }

    cout << s << endl;

}
