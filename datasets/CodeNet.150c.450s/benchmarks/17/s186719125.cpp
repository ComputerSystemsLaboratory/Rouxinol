#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
#define FOR(i, j, k) for(int i = j; i < k; i++)
const int N = 5;

int main(){
    vector<int> v(N);
    REP(i, N) cin >>v[i];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout <<v[0];
    FOR(i, 1, N) cout <<" " <<v[i];
    cout <<endl;
    return 0;
}