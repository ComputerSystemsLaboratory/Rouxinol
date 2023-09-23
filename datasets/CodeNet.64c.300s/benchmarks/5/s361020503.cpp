#include <iostream>
using namespace std;

typedef long long ll;

int main(void)
{
    struct mount {
        ll h1st; ll h2nd; ll h3rd;
    } m;

    m.h1st = 0; m.h2nd = 0; m.h3rd = 0;

    ll mheight;
    for (int i = 0; i < 10; i++) {
        cin >> mheight;
        if (mheight > m.h1st) {
            m.h3rd = m.h2nd;
            m.h2nd = m.h1st;
            m.h1st = mheight;
        } else if (mheight > m.h2nd) {
            m.h3rd = m.h2nd;
            m.h2nd = mheight;
        } else if (mheight > m.h3rd) {
            m.h3rd = mheight;
        }
    }

    cout << m.h1st << endl;
    cout << m.h2nd << endl;
    cout << m.h3rd << endl;

    return 0;
}