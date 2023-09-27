#include<iostream>
using namespace std;

int main (void){
    int h,m,s;
    cin >> s;
    m = s/60;
    s = s - m*60;
    h = m/60;
    m = m - h*60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}

