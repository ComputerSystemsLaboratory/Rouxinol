#include<iostream>
using namespace std;

int main(){
    double width, height, area, circumference;

    cin >> width >> height;

    area = width * height;

    circumference = 2 * (width + height);

    cout << area << " " << circumference << endl;
    return 0;
}