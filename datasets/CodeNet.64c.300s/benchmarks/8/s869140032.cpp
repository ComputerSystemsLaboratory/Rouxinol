#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstring>

typedef long long ll;

using namespace std;

bool checkNum(int n){
    if(n%10 == 3) {
        return true;
    }else if(n < 3){
        return false;
    }else{
        return checkNum(n/10);
    }
}

void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i%3 == 0){
            cout << " " << i;
        }else if(checkNum(i)){
            cout << " " << i;
        }
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}