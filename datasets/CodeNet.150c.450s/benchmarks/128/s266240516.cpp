#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    cin >> a;

    int PSa = a.length();

    for (int x = PSa-1; x >= 0; x--){
        cout <<a[x];
    }
    cout<<endl;

    return 0;
}