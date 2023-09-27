#include <iostream>
using namespace std;

//N:1,W:2,E:3,S:4
void RotateDice(int* a,int n)
{
    int c = a[0];
    a[0] = a[n];
    a[n] = a[5];
    a[5] = a[5 - n];
    a[5 - n] = c;
}
int main()
{
    int a[6], q, top, front;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> top >> front;
        for (int j = 0; j < 4;j++)
        {
            if(a[1] == front)
            {
                break;
            }
            RotateDice(a, 1);
        }

        if (a[1] != front)
        {
            RotateDice(a, 3);
            for (int j = 0; j < 4; j++)
            {
                if(a[1] == front)
                {
                    break;
                }
                RotateDice(a, 1);
            }
        }

        for (int j = 0; j < 4; j++)
        {
            if (a[0] == top)
            {
                break;
            }
            RotateDice(a, 3);
        }
        cout << a[2] << endl;
    }
    
    return 0;
}

