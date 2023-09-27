#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

/* 大文字を小文字に変換 */
char tolower(char c) {return (c + 0x20);}
/* 小文字を大文字に変換 */
char toupr(char c) {return (c - 0x20);}

// if('A'<=s[i] && s[i]<='Z') s[i] += 'a'-'A';

/*
string s = "abcdefg"
s.substr(4) "efg"
s.substr(0,3) "abc"
s.substr(2,4) "cdef"

// イテレータ要素のインデックス
distance(A.begin(), itr);
*/

int main()
{
    string S; cin >> S;
    stack<int> S1;  // S1は現在扱っている水溜りの面積、S2はこれまで計算してきた水溜りの蓄積
    stack<pair<int,int> > S2;
    int sum;
    rep(i,S.size()){
        char s = S[i];
        if(s == '\\'){
            S1.push(i);
        }else if(s == '/'){
            if(!S1.empty()){
                int j = S1.top(); S1.pop();
                sum += i-j;
                int a = i-j;
                while(S2.size() > 0 && S2.top().first > j){
                    a += S2.top().second; S2.pop();
                }
                S2.push(make_pair(j,a));
            }
        }
    }
    // スタックは上からしか要素を取り出せないため
    vector<int> ans;
    while(S2.size() > 0){
        ans.push_back(S2.top().second);
        S2.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    for(int i=0; i<ans.size(); i++){
        cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
