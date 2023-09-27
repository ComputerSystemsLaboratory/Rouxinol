#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int w,h,x,y,r;
    w=h=x=y=r=0;
    cin >> w;
    cin >> h;
    cin >> x;
    cin >> y;
    cin >> r;
    if ((x-r >= 0) && (y-r >= 0) && (x+r <= w) &&(y+r <= h)) {

            cout << "Yes" << endl;

    }

    else{
        cout << "No" << endl;
    }
}