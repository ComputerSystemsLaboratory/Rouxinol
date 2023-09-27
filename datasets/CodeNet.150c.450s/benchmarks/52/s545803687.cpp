#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    int a;
    stack<int> st;
    while(cin >> a){
        if(a == 0){
            int t = st.top(); st.pop();
            cout << t << endl;
        }else{
            st.push(a);
        }
    }
}