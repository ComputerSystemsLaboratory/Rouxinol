#include <iostream>
using namespace std;

int main(){
    int width,height,x,y,radius;
    cin >> width >> height >> x >> y >> radius;
    cout << (x + radius > width ||
            y + radius > height ||
            x - radius < 0      ||
            y - radius < 0      ? "No" : "Yes") << endl;
    return 0;
}