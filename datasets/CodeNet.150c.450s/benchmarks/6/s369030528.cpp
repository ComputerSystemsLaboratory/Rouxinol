#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b && b < c){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
