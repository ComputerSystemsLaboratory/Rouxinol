#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/* 大文字を小文字に変換 */
char tolower(char c) {return (c + 0x20);}
/* 小文字を大文字に変換 */
char toupr(char c) {return (c - 0x20);}

// if('A'<=s[i] && s[i]<='Z') s[i] += 'a'-'A';

/*
string s = "abcdefg"
s.substr(4) "efg"
s.substr(0,3) "abc"
s.substr(2,4) "cdef"
*/

struct dice {
    int men1, men2, men3, men4, men5, men6;
    // コンストラクタ：構造体をオブジェクト化する時に引数をとった場合される処理
    dice(int men1_, int men2_, int men3_, int men4_, int men5_, int men6_){
        men1 = men1_; men2 = men2_; men3 = men3_;
        men4 = men4_; men5 = men5_; men6 = men6_;
    }

    void roll(char di){
        int ori_men1 = men1; int ori_men2 = men2;
        int ori_men3 = men3; int ori_men4 = men4;
        int ori_men5 = men5; int ori_men6 = men6;
        if(di == 'N'){
            men1 = ori_men2; men5 = ori_men1;
            men6 = ori_men5; men2 = ori_men6;
        }else if(di == 'E'){
            men1 = ori_men4; men3 = ori_men1;
            men6 = ori_men3; men4 = ori_men6;
        }else if(di == 'S'){
            men1 = ori_men5; men5 = ori_men6;
            men6 = ori_men2; men2 = ori_men1;
        }else if(di == 'W'){
            men1 = ori_men3; men3 = ori_men6;
            men6 = ori_men4; men4 = ori_men1;
        }
    }

    int display_up(){ return men1; }
    int display_front(){ return men2; }
    int display_right(){ return men3; }
};

int main()
{
    int n1, n2, n3, n4, n5, n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    dice dice1(n1, n2, n3, n4, n5, n6);
    string s1 = "NNNNENNNN";
    string s2 = "WWWW";
    int q; cin >> q;
    for(int j=0; j<q; j++){
        int q1, q2; cin >> q1 >> q2;
        bool isq2 = false;
        for(int i=0; i<s1.size(); i++){
            char com = s1[i];
            dice1.roll(com);
            if(q2 == dice1.display_front()){
                for(int k=0; k<s2.size(); k++){
                    com = s2[k];
                    dice1.roll(com);
                    if(q1 == dice1.display_up()){
                        cout << dice1.display_right() << endl;
                        isq2 = true;
                        break;
                    }
                }
            }
            if(isq2) break;
        }
    }
}
