#include<iostream>
#include <cmath>
using namespace std;

#define ll long long

int main(){

    int a, b;
    cin >> a >> b;

    ll menseki, length;

    menseki = a * b;
    length = 2*a + 2*b;

    cout << menseki << " " << length << endl;

    return 0;
}