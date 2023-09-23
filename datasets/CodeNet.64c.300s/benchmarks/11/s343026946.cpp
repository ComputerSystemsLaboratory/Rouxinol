#include <iostream>
using namespace std;
int main(void){
    int S;
    cin >> S;
    int k = S / 3600;
    S = S % 3600; // S = S - k * 3600;
    int m = S / 60;
    int s = S % 60;
    cout << k << ":" << m << ":" << s << endl;
    return 0;
}

