#include <iostream>
#include <string>

using namespace std;
int main(){
    int x, h, m, s;
    cin >> x;
    h = x / 3600;
    x = x - h * 3600;
    m = x / 60;
    s = x - 60*m;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}