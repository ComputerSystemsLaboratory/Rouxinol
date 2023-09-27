#include<iostream>
#include<string>
using namespace std;

int main(){
    int a[7], tmp;
    string dir;
    for (int i=1; i<7; i++) {
        cin >> a[i];
    }
    cin >> dir;
    for (int i=0; i<dir.size(); i++) {
        switch (dir[i]) {
            case 'N':
                tmp = a[1];
                a[1] = a[2];
                a[2] = a[6];
                a[6] = a[5];
                a[5] = tmp;
                break;
            case 'E':
                tmp = a[1];
                a[1] = a[4];
                a[4] = a[6];
                a[6] = a[3];
                a[3] = tmp;
                break;
            case 'S':
                tmp = a[1];
                a[1] = a[5];
                a[5] = a[6];
                a[6] = a[2];
                a[2] = tmp;
                break;
            case 'W':
                tmp = a[1];
                a[1] = a[3];
                a[3] = a[6];
                a[6] = a[4];
                a[4] = tmp;
                break;
        }
    }
    cout << a[1] << endl;
}
