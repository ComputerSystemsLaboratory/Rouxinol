#include <iostream>
using namespace std;

void roll_dice(char c, int d[])
{
    int buf;
    switch(c)
    {
        case 'N':
            buf = d[6];
            d[6] = d[5];
            d[5] = d[1];
            d[1] = d[2];
            d[2] = buf;
            break;
        case 'E':
            buf = d[6];
            d[6] = d[3];
            d[3] = d[1];
            d[1] = d[4];
            d[4] = buf;
            break;
        case 'S':
            buf = d[6];
            d[6] = d[2];
            d[2] = d[1];
            d[1] = d[5];
            d[5] = buf;
            break;
        case 'W':
            buf = d[6];
            d[6] = d[4];
            d[4] = d[1];
            d[1] = d[3];
            d[3] = buf;
    }
}


int main()
{
    int d[7];
    for(int i=1;i<7;i++)
    {
        cin >> d[i];
    }
    string c;
    cin >> c;
    
    for(int i=0;i<c.size();i++)
    {
        roll_dice(c[i], d);
    }
    cout << d[1] << endl;
    
    return 0;
}

