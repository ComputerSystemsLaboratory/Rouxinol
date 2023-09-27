#include <iostream>
using namespace std;
 
class Dice {
    int *d;
public:
    Dice(int *pd);
    void roll(char dir);
    int me(int n);
};
Dice::Dice(int *pd) {
    d = pd;
}
void Dice::roll(char dir) {
    int tmp;
    if(dir=='E') {
        tmp = d[0];
        d[0] = d[3];
        d[3] = d[5];
        d[5] = d[2];
        d[2] = tmp;
        }
    else if(dir=='W') {
        tmp = d[0];
        d[0] = d[2];
        d[2] = d[5];
        d[5] = d[3];
        d[3] = tmp;
    }
    else if(dir=='S') {
        tmp = d[0];
        d[0] = d[4];
        d[4] = d[5];
        d[5] = d[1];
        d[1] = tmp;
    }
    else {
        tmp = d[0];
        d[0] = d[1];
        d[1] = d[5];
        d[5] = d[4];
        d[4] = tmp;
    }
}
int Dice::me(int n) {
    return d[n-1];
}
 
int main()
{
    int d[6];
    string dir;
    for (int i=0; i < 6; i++)
        cin >> d[i];
    cin >> dir;
    Dice dice(d);
    for (int i = 0; i < (dir.size()); i++)
        dice.roll(dir[i]);
    cout << dice.me(1) << endl;   
    return 0;
}