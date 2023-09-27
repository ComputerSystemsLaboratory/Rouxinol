#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sub;

    cin >> a >> b;

    if(a < b){
        cout << "a < b" << endl;
    }
    else if(a == b){
        cout << "a == b" << endl;
    }
    else if(a > b){
        cout << "a > b" << endl;
    }
}