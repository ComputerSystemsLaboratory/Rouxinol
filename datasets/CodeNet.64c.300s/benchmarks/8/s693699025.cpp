#include<iostream>

using std::cout;
using std::cin;
using std::endl;

bool check1(int n) {
    if (n % 3 == 0) {
        return true; 
    }
    return false;
}
bool check2(int n) {
    if (n % 10 == 3 ){
        return true; 
    }
    return false;
}

bool check(int n) {
    if (check1(n) == true || check2(n) == true) {
        return true;
    } else {
        n /= 10;
        while (n != 0) {
            if (check2(n) == true) {
                return true;
            }
            n /= 10;
        }
    }
    return false;
}

void call(int n) {
    for (int i = 1; i <= n; i++) {
        if (check(i) == true) {
            cout << " " << i;
        }
    }
    cout << endl;
    return;
}

int main(void) {
    int n;
    cin >> n;
    call(n);
}