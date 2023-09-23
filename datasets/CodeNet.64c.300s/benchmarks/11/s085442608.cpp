#include<iostream>
using namespace std;

int main(){
    int S;
    cin >> S;
    int h;
    h = S/3600;
    int A;
    A = S%3600;
    int m;
    m = A/60;
    int s;
    s = A%60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
