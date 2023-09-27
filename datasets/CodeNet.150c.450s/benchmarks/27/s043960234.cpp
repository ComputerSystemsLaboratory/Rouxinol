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

typedef struct _NODE{
    llong key;
    _NODE *right;
    _NODE *left;
}NODE;

NODE *root=NULL;

NODE *MakeNode(llong key){
    NODE *node = (NODE*)malloc(sizeof(NODE));
    node->key = key;
    node->right = NULL;
    node->left = NULL;
    return node;
}

void Insert(llong key){
    if(root==NULL){
        root = (NODE*)malloc(sizeof(NODE));
        root->left = NULL;
        root->right = NULL;
        root->key = key;
        return;
    }
    NODE *now = root;
    NODE *prev;
    NODE *new_node = MakeNode(key);
    while(now!=NULL){
        if(now->key >= key){
            prev = now;
            now  = now->left;
        }else{
            prev = now;
            now  = now->right;
        }
    }
    if(prev->key >= key){
        prev->left = new_node;
    }else{
        prev->right = new_node;
    }
}

void InorderTreeWalk(NODE *node){
    if(node==NULL){
        return;
    }
    InorderTreeWalk(node->left);
    cout << " " << node->key;
    InorderTreeWalk(node->right);
    return;
}

void PreorderTreeWalk(NODE *node){
    if(node==NULL){
        return;
    }
    cout << " " << node->key;
    PreorderTreeWalk(node->left);
    PreorderTreeWalk(node->right);
    return;
}

void PrintTree(NODE *node){
    InorderTreeWalk(node);
    cout << endl;
    PreorderTreeWalk(node);
    cout << endl;
}

int main(){
    llong n;
    cin >> n;
    char command[100];
    llong key;
    for(int i=0; i<n; i++){
        scanf("%s", command);
        if(command[0]=='i'){
            scanf("%lld", &key);
            Insert(key);
        }else{
            PrintTree(root);
        }
    }
    return 0;
}
