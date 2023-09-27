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
    string x;
    int sum = 0;
    while(cin >> x){
        if(x == "0"){
            return;
        }
        for(int i = 0; i < x.length(); i++){
            sum += x[i]-'0';
        }
        cout << sum << endl;
        sum = 0;
    }
}

int main() {
    solve();
    return 0;
}