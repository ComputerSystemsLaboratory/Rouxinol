#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    int in, h, m, s;
    cin >> in;
    if(in < 0 || in > 86400) {
        return 0;
    }
    h = in / 3600;
    m = (in - h * 3600) / 60 ;
    s = in - (h * 3600 + m * 60);
    cout << h << ":" << m << ":" << s << endl;
}
