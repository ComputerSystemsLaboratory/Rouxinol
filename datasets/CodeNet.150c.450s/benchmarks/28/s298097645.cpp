#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int (i)=0; (i)<(n); i++)
using veci = vector<int>;
using ll = long long;
int load(veci l, int q, ll p,  int n){//qはトラックの要素数、pは与えた上限、nは荷物の数
    vector<int> b(q, 0);
    int i=0;
    int j=0;
    rep(i, q){//全部載せられて、かつ最後のトラックまで載せられていたらその値を返す
    //全部のせられたらその値を返し、探索範囲を下に広げる
    //載せられなかったら探索範囲を上に広げる
        while (b[i] + l[j] <= p){
            b[i] += l[j];
            j++;
            if (j == n) {
                return p;//全部のせられた
                rep(i, q) cout << b[i] << " ";
                cout << endl;
            }
        }
    }
    return -1;//載せられなかった
}
ll binarysearch(vector<int> l, int q, int n){//二分探索
    ll right = 10000000000;
    ll left = 1;
    ll mid;
    ll a;
    while (right - left){
        mid = (right + left)/2;
        a = load(l, q, mid, n);
        if (a == -1) left = mid+1;
        if (a != -1) right = mid;
    }
    while (a == -1){
        mid++;
        a=load(l, q, mid, n);
        }
    return a;
}
int main(){
    int n, k;
    cin >> n >> k;
    veci luggage(n);
    int d;
    rep(i, n){
        cin >> luggage[i];
    }
    ll ans = binarysearch(luggage, k, n);
    cout << ans << endl;
}
