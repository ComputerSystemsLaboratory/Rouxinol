#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int keisuu(string S, char digit){
    rep(i, S.length()){
        if(S[i] == digit){
            if(i == 0 || '1' >= S[i-1] || S[i-1] > '9') return 1;
            else return S[i-1] - '0';
        }
    }
    return 0;
}

string conv(int num){
    string ret = "";
    char dig[] = {'m', 'c', 'x', 'i'};
    int divide[] = {1000, 100, 10, 1};
    rep(i, 4){
        int temp = num / divide[i];
        num -= divide[i]*temp;
        if(temp > 0){
            if(temp > 1) ret += (temp + '0');
            ret += dig[i];
        }
    }
    return ret;
}

int main(void){
    //m,c,x,i
    char dig[] = {'m', 'c', 'x', 'i'};
    int add[] = {1000, 100, 10, 1};
    int N; cin >> N;
    vector<string> ans;
    rep(i, N){
        int res = 0;
        string S1, S2; cin >> S1 >> S2;
        rep(j, 4){
            res += add[j]*(keisuu(S1, dig[j]) + keisuu(S2, dig[j]));
        }
        ans.push_back(conv(res));
    }
    rep(i, ans.size()) cout << ans[i] << endl;
    return 0;
}
