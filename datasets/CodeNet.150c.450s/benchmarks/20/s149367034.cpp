#include<iostream>
using namespace std;

int main(){
    int S,h,m,s,i;
    cin >> S;
    h = S / 3600;
    i = S - h * 3600;
    m = i / 60;
    s = i - m * 60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
