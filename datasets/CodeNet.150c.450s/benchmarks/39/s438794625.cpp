#include <iostream>
using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    int area = a * b;
    int circum = 2 * (a+b);

    cout << area << " " << circum << "\n";
}