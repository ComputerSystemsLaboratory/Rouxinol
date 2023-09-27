#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

class Dice {
    int s1, s2, s3, s4, s5, s6;

public:
    Dice(int s1, int s2, int s3, int s4, int s5, int s6);

    void print();

    void relocate(int top, int front);

    void roll(char F);

    void make_top(int top);

    void make_front(int front);

    void print(int side);
};

void Dice::make_top(int top) {
    if (s1 == top) return;
    if (s2 == top) {
        roll('N');
        return;
    }
    if (s3 == top) {
        roll('W');
        return;
    }
    if (s4 == top) {
        roll('E');
        return;
    }
    if (s5 == top) {
        roll('S');
        return;
    } else {
        roll('N');
        make_top(top);
        return;
    }
}

void Dice::make_front(int front) {
    if (front == s2) return;
    else roll('R');
    make_front(front);
    return;
}

void Dice::relocate(int top, int front) {
    vector<int> S{s1, s2, s3, s4, s5, s6};
    int top_idx = distance(S.begin(), find(S.begin(), S.end(), top));
    int front_idx = distance(S.begin(), find(S.begin(), S.end(), front));

    int tmp_s1 = s1;

}

void Dice::roll(char F) {
    int tmp = s1;
    if (F == 'N') {
        s1 = s2;
        s2 = s6;
        s6 = s5;
        s5 = tmp;
    }
    if (F == 'W') {
        s1 = s3;
        s3 = s6;
        s6 = s4;
        s4 = tmp;
    }
    if (F == 'S') {
        s1 = s5;
        s5 = s6;
        s6 = s2;
        s2 = tmp;
    }
    if (F == 'E') {
        s1 = s4;
        s4 = s6;
        s6 = s3;
        s3 = tmp;
    }
    if (F == 'R') {
        tmp = s2;
        s2 = s3;
        s3 = s5;
        s5 = s4;
        s4 = tmp;
    }
}

void Dice::print() {
    cout << s1 << endl;
}

void Dice::print(int side) {
    vector<int> S{s1, s2, s3, s4, s5, s6};
    cout << S[side-1] << endl;
}


Dice::Dice(int _s1, int _s2, int _s3, int _s4, int _s5, int _s6) {
    s1 = _s1;
    s2 = _s2;
    s3 = _s3;
    s4 = _s4;
    s5 = _s5;
    s6 = _s6;
}

int main() {
    int s, S[6];
    for (int i = 0; i < 6; i++) {
        cin >> S[i];
    }
    Dice dice = Dice(S[0], S[1], S[2], S[3], S[4], S[5]);

//    string str;
//    cin >> str;
//    for (int i = 0; i < str.length(); i++) {
//        dice.roll(str[i]);
//    }
//    dice.print();

    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        dice.make_top(a);
        dice.make_front(b);
        dice.print(3);
    }
}
