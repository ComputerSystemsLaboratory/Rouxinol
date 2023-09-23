#include <iostream>
using namespace std;

int main()
{
    int x,y,c;
    cin >> x >> y >> c;
    int i, count = 0;
    for(i = x; i <= y && i <= c;i++)
        if(c%i == 0) count++;

    cout << count << endl;


}