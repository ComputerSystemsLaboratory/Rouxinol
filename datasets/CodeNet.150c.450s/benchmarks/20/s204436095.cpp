#include <iostream>

using namespace std;

int main(){
    int S;
    cin >> S;
    int a = S / 3600;
    int b = S % 3600;
    int c = b / 60;
    int d = b % 60;
    cout << a <<':'<< c << ':' << d <<'\n';
}
