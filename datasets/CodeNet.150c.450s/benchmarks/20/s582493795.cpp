#include <iostream>
using namespace std;
int main(void){
    int S,h,m,s,H,M;
    cin >> S;
    h = S/3600;
    S %= 3600;
    m = S/60;
    s = S%60;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}

