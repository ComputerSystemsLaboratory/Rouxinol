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
    string command;

    Cube c;

    for (int i = 0; i < 6; i++) cin >> c.face[i];

    cin >> command;

    for (int i = 0; i < command.size(); i++) {
        c.roll(command[i]);
    }

    cout << c.face[0] << endl;
}
