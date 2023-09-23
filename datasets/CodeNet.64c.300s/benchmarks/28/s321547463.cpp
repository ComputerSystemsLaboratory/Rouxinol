#include <iostream>
using namespace std;
void judge1(int a)
{
    if(100 < a || a <= 0)
    {
        cout << "error" << endl;
    }
}

void judge2(int a)
{
    if(100 <= a || a <= -100)
    {
        cout << "error" << endl;
    }
}
    
void check(int W, int H, int x, int y, int r)
{
    judge1(W);
    judge1(H);
    judge2(x);
    judge2(y);
    judge1(r);
}

int main(int argc, const char * argv[])
{
    int W,H,x,y,r;
    cin >> W;
    cin >> H;
    cin >> x;
    cin >> y;
    cin >> r;
    check(W,H,x,y,r);
    if( x+r > W || y+r > H || x < 0 || y < 0 )
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}