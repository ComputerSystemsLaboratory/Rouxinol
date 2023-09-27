#include <iostream>
#include <string>

using namespace std;

int main()
{
    string FirstString;

    cin >> FirstString;

    int PanjangString = FirstString.length();

    for(int a = PanjangString-1; a >= 0; a--)
    {
        cout << FirstString[a];
    }
    cout << endl;

}