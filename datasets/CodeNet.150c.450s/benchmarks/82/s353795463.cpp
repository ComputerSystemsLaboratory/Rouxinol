#include <iostream>

using namespace std;

class dice {
public:
    int face[6];
    void rotate(char dir) {
        int temp;
        switch(dir) {
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
    bool rotateto(int top, int front) {
        const char *dir = "EEENWWWS";
        for(int i=0; i<24; i++) {
            if(face[0]==top && face[1]==front) return true;
            rotate(dir[i%8]);
        }
        return false;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    dice d;
    for(int i=0; i<6; i++) {
        cin >> d.face[i];
    }
    int n, t, f;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>t>>f;
        d.rotateto(t, f);
        cout<<d.face[2]<<'\n';
    }
    return 0;
}