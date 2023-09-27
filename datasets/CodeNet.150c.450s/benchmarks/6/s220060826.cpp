#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int i, j, k;
    cin >> i >> j >> k;
    if(i < j)
    {
        if(j < k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
        cout << "No" << endl;
}