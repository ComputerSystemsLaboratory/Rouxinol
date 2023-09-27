#include<iostream>
using namespace std;
char a[1000][2];
char b[100000];
int c, d;
int main() {
while(1){
    cin >> c;
if(c==0)return 0;
    for (int i = 0; i < c; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    cin >> d;
    for (int i = 0; i < d; i++) {
        cin >> b[i];
    }
    for(int i=0;i<d;i++){
        for (int j = 0; j < c; j++) {
            if (b[i] == a[j][0]) {
                //cout << "max" << endl;
                b[i] =a[j][1];
                break;
            }
        }
    }
    for (int i = 0; i < d; i++) {
        cout << b[i];
    }
    cout << endl;
}
}