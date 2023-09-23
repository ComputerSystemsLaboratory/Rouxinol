#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int W,H,x,y,r,a,b,c,d;
    cin >> W >> H >> x >> y >> r;
    a = r;
    b = W - r;
    c = r;
    d = H - r;

    if (a<=x && x<=b && c<=y && y<=d)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}