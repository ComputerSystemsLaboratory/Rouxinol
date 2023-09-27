#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    if((x-r >= 0) && (y-r >= 0) && (x + r <= W) && (y + r <= H)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}

