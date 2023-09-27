#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

class Cube{
public:
    int face[6];

    Cube(){}

    void roll(char direction) {
        if (direction == 'N') {
            int t = face[0];
            face[0] = face[1];
            face[1] = face[5];
            face[5] = face[4];
            face[4] = t;
        } else if (direction == 'S') {
            int t = face[0];
            face[0] = face[4];
            face[4] = face[5];
            face[5] = face[1];
            face[1] = t;
        } else if (direction == 'E') {
            int t = face[0];
            face[0] = face[3];
            face[3] = face[5];
            face[5] = face[2];
            face[2] = t;
        } else if (direction == 'W') {
            int t = face[0];
            face[0] = face[2];
            face[2] = face[5];
            face[5] = face[3];
            face[3] = t;
        }
    }
};

int main() {
    int default_face[6];
    int n, a, b;

    Cube c;
    for (int i = 0; i < 6; i++) cin >> c.face[i];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        while (true) {
            if (b == c.face[1]) {
                break;
            } else if (b == c.face[2] || b == c.face[3]) {
                c.roll('W');
            } else {
                c.roll('N');
            }
        }

        while (true) {
            if (a == c.face[0]) {
                break;
            } else {
                c.roll('W');
            }
        }

        cout << c.face[2] << endl;
    }

    return 0;
}

