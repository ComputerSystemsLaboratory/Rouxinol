#include <iostream>
using namespace std;

int main()
{
    int input_s,h,m,s;
    cin >> input_s;
    s = input_s % 60;
    input_s /= 60;
    m = input_s % 60;
    h = input_s / 60;

    cout<<h<<":"<<m<<":"<<s<<endl;

    return 0;
}