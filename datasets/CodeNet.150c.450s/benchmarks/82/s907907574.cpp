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
        // R : clock rotate
        // L : counter clock rotate
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


int main(){
    Dice d;
    for(int i = 0; i < 6; i++){
        cin >> d.s[i];
    }
    int q;
    cin >> q;
    string s = "NRRRRNRRRRNRRRRNRRRRERRRRERRRRERRRR";
    for(int i = 0; i < q; i++){
        int top, south;
        cin >> top >> south;
        for(int j = 0; j < s.size(); j++){
            if(d.s[0] == top && d.s[1] == south){
                cout << d.s[2] << endl;
                break;
            }
            d.roll(s[j]);
        }
    }
}
