#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <utility>
#include <climits>
#include <string>

typedef long long ll;

using namespace std;

char ConvertCharacter(char c){
    if(c >= 'a' && c <= 'z'){
        return (char)toupper(c);
    }else if(c >= 'A' && c <= 'Z'){
        return (char)tolower(c);
    }else{
        return c;
    }
}

void solve(){
    string s;
    getline(cin, s);
    for(auto itr = s.begin(); itr < s.end(); itr++){
        cout << ConvertCharacter(*itr);
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}