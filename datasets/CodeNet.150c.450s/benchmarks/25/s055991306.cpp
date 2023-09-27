#include <iostream>

using namespace std;

int count[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    char ch;
    while(cin>>ch) {
        if('a'<=ch && ch<='z') count[ch-'a']++;
        if('A'<=ch && ch<='Z') count[ch-'A']++;
    }
    for(int i=0; i<26; i++) {
        cout<<(char)(i+'a')<<" : "<<count[i]<<'\n';
    }
    return 0;
}