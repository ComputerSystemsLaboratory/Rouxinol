#include <iostream>
using namespace std;
int main(void){
    int x;
    cin >> x;
    cout << (x / 60 / 60) << ":" << (x / 60) % 60 << ":" << x % 60 << endl;
}