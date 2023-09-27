#include <bits/stdc++.h>

using namespace std;

int d;
int c[26];
int s[365][26];

int score(vector<int> ans){
    vector<int> last(26,-1);
    int r = 0;
    for(int i = 0;i < ans.size();i++){
        r += s[i][ans[i]];
        last[ans[i]] = i;
        for(int j = 0;j < 26;j++){
            r -= c[j]*(i-last[j]);
        }
    }
    return r;
}

void sb(){
    vector<int> ans;
    int a;
    for(int i = 0;i < d;i++){
        cin >> a;
        ans.push_back(a-1);
        cout << score(ans) << endl;
    }
}

int main(){
    int i,j;
    cin >> d;
    for(i = 0;i < 26;i++) cin >> c[i];
    for(i = 0;i < d;i++){
        for(j = 0;j < 26;j++){
            cin >> s[i][j];
        }
    }
    sb();
    //sc();
}
