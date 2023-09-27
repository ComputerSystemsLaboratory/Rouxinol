#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

class Dice {
    vector<int> v;
public:
    Dice(int a, int b, int c, int d, int e, int f);
    int getTop();
    void east();
    void south();
    void north();
    void west();
};

Dice::Dice(int a, int b, int c, int d, int e, int f) {
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);
    v.push_back(f);
}

int Dice::getTop() {
    return v[0];
}

void Dice::east() {
    vector<int> e;
    e.push_back(v[3]);
    e.push_back(v[1]);
    e.push_back(v[0]);
    e.push_back(v[5]);
    e.push_back(v[4]);
    e.push_back(v[2]);
    REP(i,6) v[i] = e[i];
}

void Dice::south() {
    vector<int> e;
    e.push_back(v[4]);
    e.push_back(v[0]);
    e.push_back(v[2]);
    e.push_back(v[3]);
    e.push_back(v[5]);
    e.push_back(v[1]);
    REP(i,6) v[i] = e[i];
}

void Dice::north() {
    vector<int> e;
    e.push_back(v[1]);
    e.push_back(v[5]);
    e.push_back(v[2]);
    e.push_back(v[3]);
    e.push_back(v[0]);
    e.push_back(v[4]);
    REP(i,6) v[i] = e[i];
}

void Dice::west() {
    vector<int> e;
    e.push_back(v[2]);
    e.push_back(v[1]);
    e.push_back(v[5]);
    e.push_back(v[0]);
    e.push_back(v[4]);
    e.push_back(v[3]);
    REP(i,6) v[i] = e[i];
}

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    Dice dice(a,b,c,d,e,f);
    string o;
    cin >> o;
    REP(i,o.size()) {
        if (o[i] == 'S') dice.south();
        else if (o[i] == 'E') dice.east();
        else if (o[i] == 'W') dice.west();
        else dice.north();
    }
    cout << dice.getTop() << endl;
    return 0;
}