#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void check(int W, int H, int x, int y, int r) {
if (x - r < 0 || x + r > W || y - r < 0 || y + r > H) {
cout << "No" << endl;
return;
}
cout << "Yes" << endl;
return;
}

int main(void) {
int W;
int H;
int x;
int y;
int r;
cin >> W >> H >> x >> y >> r;
check(W,H,x,y,r);

return 0;
}