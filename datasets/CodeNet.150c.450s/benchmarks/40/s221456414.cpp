#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int d[6];
    for (int i = 0; i < 6; i++) {
        cin >> d[i];
    }
    string cmd;
    cin >> cmd;
    int tmp;
    for (unsigned i = 0; i < cmd.size(); i++) {
        switch (cmd.at(i)) {
            case 'N':
                tmp = d[0]; d[0] = d[1]; d[1] = d[5]; d[5] = d[4]; d[4] = tmp; 
                break;
            case 'S':
                tmp = d[0]; d[0] = d[4]; d[4] = d[5]; d[5] = d[1]; d[1] = tmp;
                break;
            case 'E':
                tmp = d[0]; d[0] = d[3]; d[3] = d[5]; d[5] = d[2]; d[2] = tmp;
                break;
            case 'W':
                tmp = d[0]; d[0] = d[2]; d[2] = d[5]; d[5] = d[3]; d[3] = tmp;
        }
    }
    cout << d[0] << "\n";
}