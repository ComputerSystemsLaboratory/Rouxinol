#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

class dice{
    private:
    int s[6];
    int top;
    int bottom;
    int r_side;
    int l_side;
    int face;
    int rev;

    public:
    dice(){
        top = 0;
        bottom = 5;
        r_side = 2;
        l_side = 3;
        face = 1;
        rev = 4;
        s[0] = 1;
        s[1] = 2;
        s[2] = 3;
        s[3] = 4;
        s[4] = 5;
        s[5] = 6;
    }

    dice(int a[5]){
        top = 0;
        bottom = 5;
        r_side = 2;
        l_side = 3;
        face = 1;
        rev = 4;
        REP(i, 6) s[i] = a[i];
    }

    dice(int x, int y, int z, int u, int v, int w){
        top = 0;
        bottom = 5;
        r_side = 2;
        l_side = 3;
        face = 1;
        rev = 4;
        s[0] = x;
        s[1] = y;
        s[2] = z;
        s[3] = u;
        s[4] = v;
        s[5] = w;
    }

    int get_top() {
        return s[top];
    }

    int get_bottom(){
        return s[bottom];
    }

    int get_r_side(){
        return s[r_side];
    }

    int get_l_side(){
        return s[l_side];
    }

    int get_face(){
        return s[face];
    }

    int get_rev(){
        return s[rev];
    }

    int set_top(int i) {
        top = i;
        bottom = 5 - top;
        r_side = (i+1)%5;
        l_side = 5 - r_side;
        face = (i+2)%5;
        rev = 5 - face;
        return s[top];
    }

    int rotate_r(int i) {
        while(i<0)
            i+=4;
        i %= 4;
        REP(j, i){
            int temp = face;
            face = r_side;
            r_side = rev;
            rev = l_side;
            l_side = temp;
        }
        return s[top];
    }

    int roll_r(int i) {
        while(i<0)
            i+=4;
        i %= 4;
        REP(j, i){
            int temp = top;
            top = l_side;
            l_side = bottom;
            bottom = r_side;
            r_side = temp;
        }
        return s[top];
    }

    int roll_f(int i){
        while(i<0)
            i+=4;
        i %= 4;
        REP(j, i){
            int temp = top;
            top = face;
            face = bottom;
            bottom = rev;
            rev = temp;
        }
        return s[top];
    }

};

int search(dice d) {
    int f, t;
    cin >> t >> f;
    while(d.get_top() != t || d.get_face() != f){
        if(d.get_top() == t)
            while(d.get_face() != f)
                d.rotate_r(1);
        else if(d.get_face() == f)
            while(d.get_top() != t)
                d.roll_r(1);
        else {
            REP(i, 4){
                d.roll_f(1);
                if(d.get_face() == f || d.get_top() == t)
                    break;
            }
        }
    }
    return d.get_r_side();
}

int main() {
    ostringstream os;
    int in[6];
    int q;
    REP(i, 6) cin >> in[i];
    dice d = dice(in);
    cin >> q;
    REP(i, q)
        os << search(d) << endl;
    cout << os.str();

    return 0;
}