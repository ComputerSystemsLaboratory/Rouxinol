#include<iostream>
using namespace std;

int main(){
    int n, a, b;
    int c[6]={};
    for (int i=0; i<6; i++) {
        cin >> c[i];
    }
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        if (a==c[0]) {
            if (b==c[1]) {
                cout << c[2] << endl;
            } else if (b==c[2]) {
                cout << c[4] << endl;
            } else if (b==c[3]) {
                cout << c[1] << endl;
            } else if (b==c[4]) {
                cout << c[3] << endl;
            }
        } else if (a==c[1]) {
            if (b==c[0]) {
                cout << c[3] << endl;
            } else if (b==c[2]) {
                cout << c[0] << endl;
            } else if (b==c[3]) {
                cout << c[5] << endl;
            } else if (b==c[5]) {
                cout << c[2] << endl;
            }
        } else if (a==c[2]) {
            if (b==c[0]) {
                cout << c[1] << endl;
            } else if (b==c[1]) {
                cout << c[5] << endl;
            } else if (b==c[4]) {
                cout << c[0] << endl;
            } else if (b==c[5]) {
                cout << c[4] << endl;
            }
        } else if (a==c[3]) {
            if (b==c[0]) {
                cout << c[4] << endl;
            } else if (b==c[1]) {
                cout << c[0] << endl;
            } else if (b==c[4]) {
                cout << c[5] << endl;
            } else if (b==c[5]) {
                cout << c[1] << endl;
            }
        } else if (a==c[4]) {
            if (b==c[0]) {
                cout << c[2] << endl;
            } else if (b==c[2]) {
                cout << c[5] << endl;
            } else if (b==c[3]) {
                cout << c[0] << endl;
            } else if (b==c[5]) {
                cout << c[3] << endl;
            }
        } else if (a==c[5]) {
            if (b==c[1]) {
                cout << c[3] << endl;
            } else if (b==c[2]) {
                cout << c[1] << endl;
            } else if (b==c[3]) {
                cout << c[4] << endl;
            } else if (b==c[4]) {
                cout << c[2] << endl;
            }
        } 
    }
    return 0;
}
