#include <iostream>

using namespace std;

int main(){
    int s;
    cin >> s;
    int h = (int)s/3600;
    int m = (int)s%3600/60;
    s = (int)s%3600%60;

    cout << h << ":" << m << ":" << s << endl;
    return 0;
}