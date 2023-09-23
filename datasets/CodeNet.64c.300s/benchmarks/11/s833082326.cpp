#include <iostream>
using namespace std;
int main(void){
    int S, h, m, s;
    cin  >> S; 
    h = S / 3600;
    m = S % 3600 / 60;
    s = S % 3600 % 60;
    cout << h;
    cout << ":";
    cout << m;
    cout << ":";
    cout << s;
    cout << endl;
}

