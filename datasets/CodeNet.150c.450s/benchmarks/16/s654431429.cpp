#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n+1); ++i)
using namespace std;
using ll = long long;
const int INF = -100100100;
typedef tuple<int,int, int> P;

// // stackの無駄使い。stack<char>ではなくstack<int>にしてindexを保存
// int main(){
//     string s;
//     cin >> s;
//     stack<char> t;
//     ll ans=0;
//     vector<ll> pools;
//     rep(i,s.size()){
//         if(s[i] == '\\')t.push(s[i]);
//         else if(s[i]=='_' && t.size()!=0)t.push(s[i]);
//         else if(s[i]=='_' && t.size()==0)continue;
//         else{
//             if(t.size()==0)continue;
//             stack<char> w;
//             ll p;
//             while(t.top()!='\\'){
//                 t.pop();
//                 char x = '_';
//                 w.push(x);
//             }
//             t.pop();
//             ans+=1+w.size();
//             p += 1+w.size();
//             w.push('_');
//             w.push('_');
//             if(t.size()!=0){
//                 while(w.size()!=0){
//                     char x = w.top();w.pop();
//                     t.push(x);
//                 }
//             }else{
//                 pools.push_back(p);
//                 p = 0;
//             }
//         }
//     }  
//     cout << ans << endl;
//     rep(i,pools.size()){
//         if(i==0)cout << pools.size();
//         cout << " " << pools[i];
//     }
//     cout << endl;
//     return 0;
// }

int main(){
    string s;
    stack<int> s1;
    stack<P> s2;
    ll tot=0;
    vector<ll> ans;
    cin >> s;
    rep(i,s.size()){
        if(s[i]=='\\')s1.push(i);
        else if(s[i]=='/'&&s1.size()>0){
            int x = s1.top();s1.pop();
            int sq = i-x;
            tot += sq;
            // while(x < get<0>(s2.top()) && get<1>(s2.top()) < x && s2.size()>0){
            while(s2.size()>0 && x < get<0>(s2.top())){
                sq+= get<2>(s2.top());
                s2.pop();
            }
            s2.push(make_tuple(x,i,sq));
        }
        else continue;
    }
    cout << tot <<endl;
    cout << s2.size();
    while(s2.size()>0){
        P tp = s2.top();s2.pop();
        ans.push_back(get<2>(tp));
    };
    reverse(ans.begin(),ans.end());
    rep(i,ans.size())cout << " " << ans[i];
    cout << endl;
    return 0;
}
