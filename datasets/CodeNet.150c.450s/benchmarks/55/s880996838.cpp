#include "bits/stdc++.h"
using namespace std;

string x;

int main(){
    while (cin >> x, x != "0"){
        int a = 0;
        for (int i = 0; i < x.size(); ++i)
            a += x[i] - '0';
        cout << a << endl;
    }
}