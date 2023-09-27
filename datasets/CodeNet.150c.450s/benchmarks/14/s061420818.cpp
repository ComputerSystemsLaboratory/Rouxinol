#include <bits/stdc++.h>
using namespace std;

bool nabeatsu(int n){
    if(n % 3 == 0) return true;
    int temp = n;
    while(temp > 0){
        if(temp % 10 == 3) return true;
        temp /= 10;
    }
    return false;
}
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(nabeatsu(i)){
            cout << ' ' << i;
        }
    }
    cout << endl;
}

