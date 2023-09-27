#include<iostream>
using namespace std;

int main()
{
    int W, H, x, y, r;

    cin >> W >> H >> x >> y >> r;

    if( x >= r && y >= r)                   // x,yがr以下ならはみ出る
        if( x + r <= W && y + r <= H )      // x+rがwこえたらはみ出る yも同様
        {
            cout << "Yes" << endl;
            return 0;
        }
    
    cout << "No" << endl;
        
    return 0;
}
