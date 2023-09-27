#include <iostream>
using namespace std;
int main(void){
    int S, h, m, s;
    cin >> S;
    h = S/3600;
    m = S%3600/60;
    s = S-h*3600-m*60;
    cout << h << ":" << m << ":" << s << endl;
}

