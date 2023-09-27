#include <iostream>
using namespace std;

int main()
{
int w, h, x, y, r;
cin >> w >> h >> x >> y >> r;
if(x < r || w-r < x || y < r || h-r < y){
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
return 0;
}