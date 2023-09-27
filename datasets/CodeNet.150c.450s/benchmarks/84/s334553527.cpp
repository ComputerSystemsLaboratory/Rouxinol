// 問題名: The Number of Inversions
// URL: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D&lang=jp
// 所要時間: 20分
// --感想--
// 転倒数の計算は平衡二分木やセグメント木を使った実装しかしたことがなかったため、マージソートを用いた実装が
// 経験できて勉強になった。

#include <bits/stdc++.h>
using namespace std;

int a[200010];
// [l,r)での反転数とソートした配列を返す
pair<long long, vector<int> > calc(int l, int r){
    long long ans = 0;
    vector<int> v;
    if(l + 1 == r)
        v.push_back(a[l]);
    else if(l + 1 < r){
        int c = (l + r) / 2;
        pair<long long, vector<int> > p1 = calc(l, c), p2 = calc(c, r);
        ans = p1.first + p2.first;
        int s1 = c - l, s2 = r - c; // 左半分、右半分の数列の要素数
        int t1 = 0, t2 = 0; // 左半分、右半分の数列から取り出した数
        for (int i = 0; i < r - l; i++){
            if(t1 == s1){
                v.push_back(p2.second[t2]);
                t2++;
                ans += s1 - t1;
            }
            else if(t2 == s2){
                v.push_back(p1.second[t1]);
                t1++;
            }
            else if(p1.second[t1] < p2.second[t2]){
                v.push_back(p1.second[t1]);
                t1++;
            }
            else{
                v.push_back(p2.second[t2]);
                t2++;
                ans += s1 - t1;
            }
        }
    }
    return make_pair(ans, v);
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << calc(0, n).first << endl;
}
