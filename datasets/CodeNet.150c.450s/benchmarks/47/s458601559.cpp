#include <iostream>
using namespace std;

int main(){
    int width,height,x,y,radius;
    cin >> width >> height >> x >> y >> radius;
    if(x + radius > width || x - radius < 0 || y + radius > height || y - radius < 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}