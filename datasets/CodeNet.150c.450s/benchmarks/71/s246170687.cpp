#include <iostream>

using namespace std;
static int a = 0;


void re(int n, int t) {
    if(t == 0){
        if(n == 0) {
            a++;
            return;
        } else return;
    }

    for(int i = 0; i <= 9; i++) {
        re(n - i, t - 1);
    }

    return;
}

int main() {
    int n;
    while(cin >> n) {
        re(n, 4);
        cout << a << endl;
        a = 0;
    }

    return 0;
}