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

    int front() {
        return face[0];
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
};

int main() {
    int face1, face2, face3, face4, face5, face6;
    cin >> face1 >> face2 >> face3 >> face4 >> face5 >> face6;
    Dice d(face1, face2, face3, face4, face5, face6);
    string command;
    cin >> command;

    for (int i = 0; i < command.size(); i++) {
        d.move(command[i]);
    }

    cout << d.front() << endl;
}