#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
using ll = long long int;

const int C_NUM = 26;
const int D_MAX = 366;
int D;
int c[C_NUM+5];
int s[D_MAX][C_NUM+5];

int t[D_MAX];
int last[C_NUM+5];

int main(){
    cin >> D;
    for(int i = 1; i <= C_NUM; i++)cin >> c[i];
    for(int i = 1; i <= D; i++){
        for(int j = 1; j <= C_NUM; j++){
            cin >> s[i][j];
        }
    }
    for(int i = 1; i <= D; i++){
        cin >> t[i];
    }
    memset(last, 0, sizeof(last));
    ll v = 0;
    for(int i = 1; i <= D; i++){
        v += s[i][t[i]];
        last[t[i]] = i;
        for(int j = 1; j <= C_NUM; j++){
            v -= c[j] * (i - last[j]);
        }
        cout << v << endl;
    }
    return 0;
}