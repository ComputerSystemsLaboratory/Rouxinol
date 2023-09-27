/*
      author : Nishikawa
      created: 06.08.2020 15:54:35
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;


int main(){
    int N;
    cin >> N;
    vector<int> a(N+1);
    vector<int> vec(100001,0);
    for(int i=1; i<=N; i++) cin >> a[i];
    for(int i=1; i<=N; i++){
        vec[a[i]]++;
    }
    int Q; 
    cin >> Q;
    vector<int> b(Q+1),c(Q+1);
    for(int i=1; i<=Q; i++) cin >> b[i] >> c[i];

    //for(int i=1; i<=Q; i++) cout << b[i] << " and " << c[i] << endl;
    //vector<ll> s(Q+1,0),t(Q+1,0);
    ll s=0;
    for(int i=1; i<=N; i++){
        s+=a[i];
    }

    for(int i=1; i<=Q; i++){
        if(vec[b[i]]!=0){
            s=s+(c[i]-b[i])*vec[b[i]];
            vec[c[i]]+=vec[b[i]];
            vec[b[i]]=0;
        }
        cout << s << endl;
    }

    return 0;
}