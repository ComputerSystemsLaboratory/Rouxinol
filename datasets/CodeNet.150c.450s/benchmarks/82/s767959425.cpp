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
        rotate(1, 2, 4, 3);
    }
    void rotate (int a, int b, int c, int d) {
        int t = face[a];
        face[a] = face[b];
        face[b] = face[c];
        face[c] = face[d];
        face[d] = t;
    }
};

int getRight (Dice d, int face1, int face2) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (d.face[0] == face1 && d.face[1] == face2) return d.face[2];
            d.rotateZ();
        }
        if (i % 2 == 0) d.rotateY();
        else d.rotateX();
    }
    return -1;
}

int main () {
    Dice d;
    
    for (int i = 0; i < 6; i++) cin >> d.face[i];

    int q;
    cin >> q;

    int face1, face2;
    for (int i = 0; i < q; i++) {
        cin >> face1 >> face2;
        cout << getRight(d, face1, face2) << endl;
    }
}
