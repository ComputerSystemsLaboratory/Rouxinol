#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<vector>
#include<map>
using namespace std;
/*
time:
wa:
反省:
考察:
*/
int main() {
    int n, k; cin >> n >> k;
    vector<int>a(n);
    vector<long long>grade(n-k+1,1);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n-k; i++){
        if(a[i] < a[k+i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}