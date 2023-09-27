#include <iostream>
using namespace std;
#define MAX 250

int main() {
    int n;
    int x;
    int H[MAX];

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        H[i] = x;
    }

    for(int i=0; i<n; i++) {
        cout << "node " << i+1 << ": ";
        cout << "key = " << H[i] << ", ";
        //親が存在するかを判定
        if(i>0) {
            cout << "parent key = " << H[((i+1)/2-1)] << ", ";
        }
        if((2*(i+1))<=n) {
            cout << "left key = " << H[2*(i+1)-1] << ", ";
        }
        if((2*(i+1)+1)<=n) {
            cout << "right key = " << H[2*(i+1)] << ", ";
        }
        cout << endl;
    }

    return 0;
}
