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

void solve(){
    const int magic = 26;
    int alphabet[magic];
    string x;

    for(int i = 0; i < magic; i++){
        alphabet[i] = 0;
    }
    while(getline(cin, x)){
        if(x == ""){
            break;
        }
        for(int i = 0; i < x.length(); i++){
            alphabet[tolower(x[i])-'a']++;
        }
    }
    for(char j = 'a'; j <= 'z'; j++){
        cout << j << " : " << alphabet[j-'a'] << endl;
    }
}

int main() {
    solve();
    return 0;
}