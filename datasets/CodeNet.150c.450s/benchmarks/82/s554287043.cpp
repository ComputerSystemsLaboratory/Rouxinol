#include<iostream>
#include<cstdio>
using namespace std;

class Dice {
public:
    int face[6];

    Dice(int face1, int face2, int face3, int face4, int  face5, int face6) {
        face[0] = face1;
        face[1] = face2;
        face[2] = face3;
        face[3] = face4;
        face[4] = face5;
        face[5] = face6;
    }

    int top() {
        return face[0];
    }
    int front() {
        return face[1];
    }
    int right() {
        return face[2];
    }

    void move(char c) {
        if (c == 'N') {
            moveFace(1, 2, 6, 5);
        } else if (c == 'S') {
            moveFace(1, 5, 6, 2);
        } else if (c == 'W') {
            moveFace(1, 3, 6, 4);
        } else if (c == 'E') {
            moveFace(1, 4, 6, 3);
        }
    }

    void moveFace(int i1, int i2, int i3, int i4) {
        int tmp = face[i1 - 1];
        face[i1 - 1] = face[i2 - 1];
        face[i2 - 1] = face[i3 - 1];
        face[i3 - 1] = face[i4 - 1];
        face[i4 - 1] = tmp;
    }

    int getRight(int top2, int front2) {
        for (int i = 0; i < 4; i++) {
            move('N');
            for (int j = 0; j < 4; j++) {
                move('W');
                for (int k = 0; k < 4; k++) {
                    move('N');
                    if (top() == top2 && front() == front2) {
                        return right();
                    }
                }
            }
        }

        return 0;
    }
};

int main() {
    int face1, face2, face3, face4, face5, face6;
    cin >> face1 >> face2 >> face3 >> face4 >> face5 >> face6;
    Dice d(face1, face2, face3, face4, face5, face6);
    int count;
    cin >> count;

    for (int i = 0; i < count; i++) {
        int top, front;
        cin >> top >> front;

        cout << d.getRight(top, front) << endl;
    }
}