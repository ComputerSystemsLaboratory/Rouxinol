#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#include <bitset>
#include <cstdio>
#include <set>
#include <stack>
#include <queue>
#include <cassert>
#include <numeric>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for (ll i=(a),__last_##i=(b);i<__last_##i;i++)
#define RFOR(i,a,b) for (ll i=(b)-1,__last_##i=(a);i>=__last_##i;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define __GET_MACRO3(_1, _2, _3, NAME, ...) NAME
#define rep(...) __GET_MACRO3(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define rrep(...) __GET_MACRO3(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)
template<typename T> istream &operator>>(istream &is, vector<T> &v){ for (auto &x : v) is >> x; return is; }
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {
    REP(i,v.size()){if(i)os<<" ";os<<v[i];}return os;}
template<typename T> ostream& operator<<(ostream& os, const vector<vector<T>>& v) {
    REP(i,v.size()){if(i)os<<endl;os<<v[i];}return os;}
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define Sort(v) sort(v.begin(),v.end())
#define Reverse(v) reverse(v.begin(),v.end())
#define ALL(a)  (a).begin(),(a).end()
#define pb push_back
#define mp make_pair
//#define int ll

const int md = 1000000007;
const int INF = 1<<30;
const double PI = acos(-1);

int partition(vector<pair<int,string>>& a,int p,int r){
    int x = a[r].first;
    int i = p-1;
    rep(j,p,r){
        if(a[j].first <= x){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quicksort(vector<pair<int,string>>& x,int p,int r){
    if (p<r){
        int q = partition(x,p,r);
        quicksort(x,p,q-1);
        quicksort(x,q+1,r);
    }
}

bool cmp(const pair<pair<int,string>,int> &a, const pair<pair<int,string>,int> &b){
    if(a.first.first == b.first.first){
        return a.second < b.second;
    }else{
        return a.first.first < b.first.first;
    }
}
int main(){

    int n; cin >>n;
    vector<pair<int,string>> a;
    vector<pair<pair<int,string>,int>> b;
    rep(i,n){
        string s;
        int x;
        cin >> s >> x;
        a.emplace_back(x,s);
        b.push_back(make_pair(make_pair(x,s),i));
    }

    

    quicksort(a,0,n-1);
    sort(b.begin(),b.end(),cmp);

    bool f = true;

    rep(i,n){
        if(a[i] != b[i].first) f = false;
    }

    if(!f) cout << "Not stable" << endl;
    else cout << "Stable" << endl;

    rep(i,n){
        cout << a[i].second << " " << a[i].first << endl;
        //cout << b[i].second << " " << b[i].first << endl;
    }
    

}
