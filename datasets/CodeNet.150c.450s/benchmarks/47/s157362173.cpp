#include <iostream>
using namespace std;

const string YES = "Yes";
const string NO = "No";

int main(void)
{
    int W, H, x, y, r;
    string answer = YES;
    cin >> W >> H >> x >> y >> r;
    if(x - r < 0) answer = NO;
    if(y - r < 0) answer = NO;
    if(W < x + r) answer = NO;
    if(H < y + r) answer = NO;

    cout << answer << endl;

    return 0;
}