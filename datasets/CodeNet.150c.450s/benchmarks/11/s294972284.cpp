#include <iostream>
using namespace std;

void check(int[], char);

int main() {
    int n;
    cin >> n;
    int s[13] = {0};
    int h[13] = {0};
    int c[13] = {0};
    int d[13] = {0};
       
    for (int i = 0; i < n; i++){
        char a;
        int b;
        cin >> a;
        cin >> b;
        b -= 1;
        switch(a) {
        case 'S':
            s[b]++;
            break;
        case 'H':
            h[b]++;
            break;
        case 'C':
            c[b]++;
            break;
        case 'D':
            d[b]++;
            break;
        default:
            break;
        }
    }

    check(s, 'S');
    check(h, 'H');
    check(c, 'C');
    check(d, 'D');
}

void check(int array[], char c){
    for (int i = 0; i < 13; i++){
        if (array[i] == 0) {
            cout << c << " " << i + 1 << endl;
        }
    }
    return;
}