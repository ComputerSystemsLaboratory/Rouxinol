#include <iostream>
using namespace std;

void direction(char d, int dice[])
{
    int temp;
    switch(d)
    {
        case 'E': temp    = dice[1];
                  dice[1] = dice[4];
                  dice[4] = dice[6];
                  dice[6] = dice[3];
                  dice[3] = temp;
                  break;
        case 'S': temp    = dice[1];
                  dice[1] = dice[5];
                  dice[5] = dice[6];
                  dice[6] = dice[2];
                  dice[2] = temp;
                  break;
        case 'W': temp    = dice[1];
                  dice[1] = dice[3];
                  dice[3] = dice[6];
                  dice[6] = dice[4];
                  dice[4] = temp;
                  break;
        case 'N': temp    = dice[1];
                  dice[1] = dice[2];
                  dice[2] = dice[6];
                  dice[6] = dice[5];
                  dice[5] = temp;
                  break;
        case 'R': temp    = dice[2];
                  dice[2] = dice[3];
                  dice[3] = dice[5];
                  dice[5] = dice[4];
                  dice[4] = temp;
                  break;
    }
    return;
}

int main ()
{
    int dice[7], q;
    for (int i = 1;i <= 6;i++) cin >> dice[i];
    cin >> q;
    
    while(q--)
    {
        int top, front;
        cin >> top >> front;
        if (top == dice[3]) direction('W', dice);
        if (top == dice[4]) direction('E', dice);
        while(top != dice[1])   direction('N', dice);
        while(front != dice[2]) direction('R', dice);
        cout << dice[3] << endl;
    }
    return 0;
}
