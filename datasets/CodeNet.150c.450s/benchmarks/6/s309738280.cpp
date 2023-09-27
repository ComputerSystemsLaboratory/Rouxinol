#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a;
int b;
int c;

void input() {
    cin >> a;
    cin >> b;
    cin >> c;
}

int main() {
    input();

    if(a < b && b < c){
        cout << "Yes" << endl;

    } else{
        cout << "No" << endl;

    }

    return 0;
}
