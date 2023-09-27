#include <iostream>

using namespace std;

int main()
{
    int h;
    int in;
    int a[100];
    int i;
    while (cin >> h)
    {
        for(i = 0; i < h; i++)
        {
            cin >> in;
            *(a + i) = in;
        }
        *(a + i) = '\0';
        for(i = h - 1; i > 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << a[0] << endl;
    }
}