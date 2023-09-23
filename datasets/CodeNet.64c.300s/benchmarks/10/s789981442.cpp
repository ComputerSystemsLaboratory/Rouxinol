#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   int x,y;
    while(cin >> x >> y, x || y) {
        cout << min(x,y) << " " << max(x,y) <<endl;
    }
}