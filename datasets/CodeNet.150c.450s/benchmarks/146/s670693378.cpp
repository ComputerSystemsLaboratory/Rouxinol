#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(void)
{
    double x1,x2,x3,x4,y1,y2,y3,y4,p1,p2;
    int n;
    
    cin >> n;
    
    rep(i,n)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        p1 = (y2-y1)/(x2-x1);
        p2 = (y4-y3)/(x4-x3);
        if(p1 == p2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}