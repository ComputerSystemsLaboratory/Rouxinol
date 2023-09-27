#include <iostream>

using namespace std;

class Dice {
    public:
    int face[6];
    Dice() {}
    void rotateX () {
        rotate(0, 1, 5, 4);
    }
    void rotateY () {
        rotate(0, 2, 5, 3);
    }
    void rotateZ () {
        rotate(0, 1, 5, 4);
    }
    void rotate (int a, int b, int c, int d) {
        int t = face[a];
        face[a] = face[b];
        face[b] = face[c];
        face[c] = face[d];
        face[d] = t;
    }
    void move (char c) {
        if (c == 'E') for (int i = 0; i < 3; i++) rotateY();
        if (c == 'W') rotateY();
        if (c == 'N') rotateX();
        if (c == 'S') for (int i = 0; i < 3; i++) rotateX();
    }
};

int main () {
    Dice d;
    string com;
    
    for (int i = 0; i < 6; i++) cin >> d.face[i];
    cin >> com;

    for (int i = 0; i < com.size(); i++) d.move(com[i]);

    cout << d.face[0] << endl;
}
