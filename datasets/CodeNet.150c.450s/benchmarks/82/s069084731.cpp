#include <iostream>
#include <string>
#include <array>
using namespace std;

struct Dice
{
    array<int, 6> roll;
    
    void toNorth()
    {
        array<int, 6> t = roll;
        roll[4] = t[0];
        roll[0] = t[1];
        roll[5] = t[4];
        roll[1] = t[5];
    }

    void toSouth()
    {
        array<int, 6> t = roll;
        roll[1] = t[0];
        roll[5] = t[1];
        roll[0] = t[4];
        roll[4] = t[5];
    }

    void toWest()
    {
        array<int, 6> t = roll;
        roll[3] = t[0];
        roll[0] = t[2];
        roll[5] = t[3];
        roll[2] = t[5];
    }

    void toEast()
    {
        array<int, 6> t = roll;
        roll[2] = t[0];
        roll[5] = t[2];
        roll[0] = t[3];
        roll[3] = t[5];
    }

    void toCCW()
    {
        array<int, 6> t = roll;
        roll[2] = t[1];
        roll[4] = t[2];
        roll[1] = t[3];
        roll[3] = t[4];
    }

    void toCW()
    {
        array<int, 6> t = roll;
        roll[3] = t[1];
        roll[1] = t[2];
        roll[4] = t[3];
        roll[2] = t[4];
    }

    int serchRight(int upper, int front)
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                if(roll[0] == upper) {
                    for(int k = 0; k < 4; k++)
                    {
                        if(roll[1] == front)
                            return roll[2];
                        else
                            toCW();
                    } 
                }
                toNorth();
            }
            toCW();
        }
        return 9999;
    }

    void print()
    {
        for(int i = 0; i < 6; i++)
        {
            cout << "[" << i << "]:" << roll[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int count;
    Dice dice;
    for (int i=0; i<6; i++) {
        cin >> dice.roll[i];
    }
    
    cin >> count;
    for (int i=0; i<count; i ++ ) {
        int n1,n2;
        cin >> n1 >> n2;
        cout << dice.serchRight(n1,n2) << endl;
    }
    return 0;
}


