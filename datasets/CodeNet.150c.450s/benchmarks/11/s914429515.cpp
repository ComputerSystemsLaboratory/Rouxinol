#include<iostream>
using namespace std;
int main(void)
{
    int n, a, YJSNPI[10][100];
    char ch;
 
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> ch >> a;
        if (ch == 'S')
            YJSNPI[0][a]=a;
        else if (ch == 'H')
            YJSNPI[1][a]=a;
        else if (ch == 'C')
            YJSNPI[2][a]=a;
        else if (ch == 'D')
            YJSNPI[3][a]=a;
    }
    for (int i = 1; i <= 13; i++)
    {
        if (YJSNPI[0][i] != i)
            cout << 'S' << " " << i << endl;
    }
    for (int i = 1; i <= 13; i++)
    {
 
        if (YJSNPI[1][i] != i)
            cout << 'H' << " " << i << endl;
    }
    for (int i = 1; i <= 13; i++)
    {
 
        if (YJSNPI[2][i] != i)
            cout << 'C' << " " << i << endl;
    }
    for (int i = 1; i <= 13; i++)
    {
        if (YJSNPI[3][i] != i)
            cout << 'D' << " " << i << endl;
    }
    return 0;
}
