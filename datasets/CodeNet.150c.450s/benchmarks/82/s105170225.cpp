#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;

class dice{
public:
    int top, bottom, right, left, front, back;
    void North();
    void East();
    void South();
    void West();
    void clockRotate();
};
void dice:: North(){
    int tmp = top;
    top = front;
    front = bottom;
    bottom = back;
    back = tmp;
}
void dice:: East(){
    int tmp = top;
    top = left;
    left = bottom;
    bottom = right;
    right = tmp;
}
void dice:: South(){
    int tmp = top;
    top = back;
    back = bottom;
    bottom = front;
    front = tmp;
}
void dice:: West(){
    int tmp = top;
    top = right;
    right = bottom;
    bottom = left;
    left = tmp;
}
void dice:: clockRotate(){
    int tmp = front;
    front = right;
    right = back;
    back = left;
    left = tmp;
}

signed main(){
    dice d;
    cin >> d.top >> d.front >> d.right >> d.left >> d.back >> d.bottom;
    int q;
    cin >> q;
    int t, f;
    string s = "NNNNEEEERRRRRR";
    rep(i, 0, q){
        cin >> t >> f;
        rep(j, 0, s.size()){
            if(d.top == t && d.front == f){
                cout << d.right << endl;
                break;
            }else if(d.top == t){
                j = 8;
            }
            if(s[j] == 'N') d.North();
            else if(s[j] == 'E') d.East();
            else if(s[j] == 'S') d.South();
            else if(s[j] == 'W') d.West();
            else if(s[j] == 'R') d.clockRotate();
        }
    }
}