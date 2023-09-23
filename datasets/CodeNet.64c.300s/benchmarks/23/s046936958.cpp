#include <iostream>
using namespace std;

int getLength(int w, int h)
{
    return (w + h) * 2;
}

int getArea(int w, int h)
{
    return w * h;
}

int main()
{
    int w, h;
    cin >> w >> h;
    cout << getArea(w, h) << " " << getLength(w, h) << endl;
    
    return 0;
}