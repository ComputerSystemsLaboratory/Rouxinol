//#include<iostream>
//#include<algorithm>
//#include<string>
//#include <cmath>
//#include <vector>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define REP(x,n) for(int x=0;x<n;x++)

//vector//
#define vei vector<int> 
#define velli vector<long long int> 
#define pb(x) push_back(x) // 末尾にxを加える
#define pb2 pop_back() // 末尾削除
#define all(x) (x).begin(),(x).end() //イテレーター
#define be(x) (x).begin()
//auto  auto begin = v.begin()とか

typedef pair<int,int> P;  //q(p.first,p.second)

// バケット使った問題
const ll int MAX = 100010;

template<class T> T Sum(vector<T> t){
    T sum=0;
    ll int t_size = t.size();
    for(ll int i=0; i<t_size;i++){
        sum += i*t[i];
    }
    return sum;
}

// 0で初期化 バケット
vector<ll int> bucket(MAX,0);

int main (){
    ll int n; cin >> n;
    vector<ll int> a(n);
    ll int ans =0;
    for(ll int i=0; i<n; i++){
        cin >> a[i];
        bucket[a[i]]++;
        ans += a[i];
    }

    ll int q; cin >> q;
    vector<ll int> b(q);
    vector<ll int> c(q);
    for(ll int i=0; i<q; i++){
        cin >> b[i] >> c[i];
    }

    for(ll int i=0; i<q; i++){
        ans += bucket[b[i]]*(c[i]-b[i]);
        bucket[c[i]] += bucket[b[i]];
        bucket[b[i]] = 0;
        cout << ans << endl;
    }

}

    // for(int i=0; i<q; i++){
    //     // sort(a.begin(),a.end());
    //     // auto pos1 = lower_bound(a.begin(),a.end(),b[i]);
    //     // auto pos2 = upper_bound(a.begin(),a.end(),b[i]);
    //     // replace(pos1,pos2,b[i],c[i]);
    //     replace(a.begin(),b.end(),b[i],c[i]);
    //     cout << Sum<int>(a) << endl;
    // }