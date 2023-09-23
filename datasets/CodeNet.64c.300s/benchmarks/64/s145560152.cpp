#include <iostream>
#include <utility>

using namespace std;

// ?????§??¬?´???°
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B&lang=jp
int main(int argc, char const* argv[])
{
    int x,y,m;
    cin >> x;
    cin >> y;

    if(y > x){
        swap(x,y);
    }
    do{
        m = x % y;
        x = y;
        y = m;
    } while(m != 0);

    cout << x << endl;

    return 0;
}