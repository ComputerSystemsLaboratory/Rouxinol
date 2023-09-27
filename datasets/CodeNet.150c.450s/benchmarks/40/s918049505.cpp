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

signed main(){
    dice d;
    cin >> d.top >> d.front >> d.right >> d.left >> d.back >> d.bottom;
    string s;
    cin >> s;
    rep(i, 0, s.size()){
        // switch (s[i]){
            // case 'N': d.North();
            //case 'E': d.East();
            //case 'S': d.South();
            //case 'W': d.West();
        if(s[i] == 'N') d.North();
        else if(s[i] == 'E') d.East();
        else if(s[i] == 'S') d.South();
        else if(s[i] == 'W') d.West();
           // cout << d.top << endl;
    }
    cout << d.top << endl;
}