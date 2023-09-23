#include <iostream>

using namespace std;
int main(){
    int t;
    cin >> t;
    int h = t/60/60;
    t %= 60*60;
    int m = t/60;
    int s = t%60;
    cout << h << ":" << m << ":" << s << endl;
}