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
};

int main()
{
    int num;
    string commands;
    Dice dice;
    for (int i=0; i<6; i++) {
        cin >> dice.roll[i];
    }
    cin >> commands;
    size_t size = commands.size();
    for (size_t i=0; i<=size; i++ ) {
        if (commands[i]=='N')
            dice.toNorth();
        else if (commands[i]=='S')
            dice.toSouth();
        else if (commands[i]=='E')
            dice.toEast();
        else if (commands[i]=='W')
            dice.toWest();
    }
    cout << dice.roll[0] << endl;
    
    return 0;
}
