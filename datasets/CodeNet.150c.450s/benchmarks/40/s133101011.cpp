#include <iostream>

using namespace std;

class dice {
public:
    int face[6];
    void rotate(char dir) {
        int temp;
        switch (dir) {
        case 'N':
            temp = face[0];
            face[0] = face[1];
            face[1] = face[5];
            face[5] = face[4];
            face[4] = temp;
            break;
        case 'E':
            temp = face[0];
            face[0] = face[3];
            face[3] = face[5];
            face[5] = face[2];
            face[2] = temp;
            break;
        case 'W':
            temp = face[0];
            face[0] = face[2];
            face[2] = face[5];
            face[5] = face[3];
            face[3] = temp;
            break;
        case 'S':
            temp = face[0];
            face[0] = face[4];
            face[4] = face[5];
            face[5] = face[1];
            face[1] = temp;
            break;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    dice d;
    for (int i=0; i<6; i++) {
        cin >> d.face[i];
    }
    char dir;
    while (cin >> dir)d.rotate(dir);
    cout<<d.face[0]<<'\n';
    return 0;
}