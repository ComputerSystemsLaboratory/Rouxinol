#include <bits/stdc++.h>
using namespace std;

class Dice{
public:
    int s[6];
    // s[0] : top
    // s[1] : south  front
    // s[2] ; east  right
    // s[3] : west  left
    // s[4] : north  back
    // s[5] : bottom
    string str = "EWNSRL";
    int d[6][4] = {{0, 3, 5, 2}, {0, 2, 5, 3}, {0, 1, 5, 4}, {0, 4, 5, 1}, {1, 2, 4, 3}, {1, 3, 4, 2}};
    void roll(char c){
        //  N
        // W E
        //  S
        int idx = str.find(c);
        int b = s[d[idx][0]];
        for(int i = 0; i < 3; i++){
            s[d[idx][i]] = s[d[idx][i + 1]];
        }
        s[d[idx][3]] = b;
    }
    int hash(){
        int res = 0;
        for(int i = 0; i < 6; i++) res = res * 256 + s[i];
        return res;
    }
};

/*
verified
https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/all/ITP1_11_A
*/

int main(){
    Dice d;
    for(int i = 0; i < 6; i++){
        cin >> d.s[i];
    }
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        d.roll(s[i]);
    }
    cout << d.s[0] << endl;
}
