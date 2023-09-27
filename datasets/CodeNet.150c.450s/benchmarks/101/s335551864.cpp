#include<vector>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#define INF 100000000000000
using namespace std;
typedef long long llong;

//int isalpha(char ch): ch がアルファベットなら true を返す
//int isdigit(char ch): ch が数字なら true を返す
//int islower(char ch): ch が小文字なら true を返す
//int isupper(char ch): ch が大文字なら true を返す
//int tolower(char ch): ch の小文字を返す
//int toupper(char ch): ch の大文字を返す

//string型
//size()	文字数を返す
//Insert()	（指定した場所に）文字・文字列を挿入する
//erase()	（指定した場所の）文字・文字列を削除する
//clear()	すべての文字を削除する
//substr()	文字列の（指定した）部分文字列を返す
//replace()	（指定した）部分文字列を新しい文字列に置換する
//文字列の比較は、<=や==などを使え
//replace関数を使い、簡単に文字列を置換
//リバース関数：reverse(str.begin(), str.end());
//map<type, type> dict;で宣言
//グラフ理論用変数
//vector<vector<llong> > graph(N);

//ソート
//降順sort(v.begin(), v.end(), std::greater<Type>());

//大文字から小文字へんかん
//w[i] = w[i]-'A'+'a';

//vector
//assignメソッド　引数：サイズ、値
//与えられたサイズと値でvectorを初期化する

void dfs(vector<vector<llong> > &graph, vector<bool> &seen, vector<llong> &color, llong node, llong now_color){
    if(seen[node]){
        return;
    }
    seen[node] = true;
    color[node] = now_color;
    for(int i=0; i<graph[node].size(); i++){
        dfs(graph, seen, color, graph[node][i], now_color);
    }
}

int main(){
    llong n,m;
    llong s,t;
    llong now_color=0;
    scanf("%lld %lld", &n, &m);
    vector<vector<llong> > graph(n);
    vector<bool> seen(n, false);
    vector<llong> color(n, 0);

    for(int i=0; i<m; i++){
        scanf("%lld %lld", &s, &t);
        graph[s].push_back(t);
        graph[t].push_back(s);
    }
    for(int i=0; i<n; i++){
        if(seen[i]){
            continue;
        }
        dfs(graph, seen, color, i, now_color);
        now_color++;
    }
    llong q;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> s >> t;
        if(color[s]==color[t]){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}
