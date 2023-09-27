#include <iostream>
using namespace std;

int main()
{
    int  S;
    cin >> S;
    int h, m, s;
    s = S % 60;
    m = (S / 60) % 60;
    h = (S / 60 / 60) % 60;
    
    cout << h << ":"<< m << ":" << s <<  "\n";

}
