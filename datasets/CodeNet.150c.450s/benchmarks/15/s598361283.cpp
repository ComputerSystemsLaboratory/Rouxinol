#include <bits/stdc++.h>
using namespace std;
int main (){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    vector<int> vc1(N);
    for( auto& x : vc1 ){
        cin >> x;
    }
    
    int Q;
    cin >> Q;
    
    vector<int> vc2(Q);
    for( auto& x : vc2 ){
        cin >> x;
    }
    set<int> st;
    for( auto&& x : vc2 ){
        for( auto&& y : vc1 ){
            if( x == y ){
                st.insert(x);
            }
        }
    }
    cout << st.size() << endl;
    return 0;
}