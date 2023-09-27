#include<iostream>
using namespace std;
int main (){
    int a, b, c;
    cin >> a >> b >> c;
   int x, y, z;
    x = max(max(a, b), max(b, c));
    y = min(min(a, b), min(b, c));
    z = a + b + c - (x + y);
    cout << y << " " << z << " "<< x << endl;
    return 0;
}
