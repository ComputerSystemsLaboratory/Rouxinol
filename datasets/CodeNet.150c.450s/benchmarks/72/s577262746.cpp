#include <bits/stdc++.h>

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    string s; 
    cin >> s;
    for(auto &i: s){
        if(i >= 'a' && i <= 'z') cout << (char)(i-'a'+'A');
        else
        if(i >= 'A' && i <= 'Z') cout << (char)(i-'A'+'a');
        else                     cout << (char)i; 
    }
    while(cin >> s){
        cout << " ";
        for(auto &i: s){
            if(i >= 'a' && i <= 'z') cout << (char)(i-'a'+'A');
            else
            if(i >= 'A' && i <= 'Z') cout << (char)(i-'A'+'a');
            else                     cout << (char)i; 
        }
    }
    cout << '\n';
    return 0;
}




