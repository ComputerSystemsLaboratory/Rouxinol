#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    int cnt = 0;
    while (a <= b){
        if (!(c % a)) cnt++;
        a++;
    }
    cout << cnt << endl;
}