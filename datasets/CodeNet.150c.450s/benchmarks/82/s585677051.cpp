#include <iostream>
#include <stdlib.h>
#include <time.h>
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

void init_rand()
{
    srand((unsigned int)time(NULL));
}

int return_random_direction()
{
    switch(rand()%4)
    {
        case 0:
            return 'N';
        case 1:
            return 'E';
        case 2:
            return 'S';
        case 3:
            return 'W';
    }
}    

int main()
{
    int d[7];
    for(int i=1;i<7;i++)
    {
        cin >> d[i];
    }
    
    int q;
    cin >> q;

    int top, front;
    for(int i=0;i<q;i++)
    {
        cin >> top >> front;
        
        int count = 0;
        while(!(d[1]==top && d[2]==front))
        {
            char dir = return_random_direction();
            roll_dice(dir, d);
            count++;
        }
//       cout << d[3] << ": count=" << count<< endl;
        cout << d[3] << endl;
    }
    
    return 0;
}

