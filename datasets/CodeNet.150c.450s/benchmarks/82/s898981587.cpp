#include <iostream>
using namespace std;

struct Dice {
    int a, b, c, d, e, f;
    Dice(int a, int b, int c, int d, int e, int f) {
        setFaces(a, b, c, d, e, f);
    }
    void setFaces(int a, int b, int c, int d, int e, int f) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->e = e;
        this->f = f;
    }
    void rotate(char dir) {
        switch (dir) {
            case 'N':
                setFaces(b, f, c, d, a, e);
                break;                
            case 'E':
                setFaces(d, b, a, f, e, c);
                break;                
            case 'S':
                setFaces(e, a, c, d, f, b);
                break;                
            case 'W':
                setFaces(c, b, f, a, e, d);
                break;
            case 'L':
                setFaces(a, d, b, e, c, f);
                break;
            case 'R':
                setFaces(a, c, e, b, d, f);
                break;
        }
    }
    void roll(string s) {
        for (int i=0; i<s.size(); i++)
            rotate(s[i]);
    }
    void alignTop(int top) {
        if (a != top) roll("N");
        if (a != top) roll("N");
        if (a != top) roll("N");
        if (a != top) roll("E");
        if (a != top) roll("EE");
    }
    void alignTopFront(int top, int front) {
        alignTop(top);
        if (b != front) roll("L");
        if (b != front) roll("L");
        if (b != front) roll("L");
    }
};

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    Dice dice(a, b, c, d, e, f);

    int n, x, y;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x >> y;
        dice.alignTopFront(x, y);
        cout << dice.c << endl;
    }
}

