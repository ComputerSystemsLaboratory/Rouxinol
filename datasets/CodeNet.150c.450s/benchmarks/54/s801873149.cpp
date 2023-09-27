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

string toLower(string s){
    string t = "";
    for(auto itr = s.begin(); itr < s.end(); itr++){
        t += tolower(*itr);
    }
    return t;
}

void solve(){
    string w, t;
    int count = 0;
    cin >> w;

    while(cin >> t && t != "END_OF_TEXT"){
        if(toLower(t) == toLower(w)){
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    solve();
    return 0;
}