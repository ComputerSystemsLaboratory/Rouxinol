#include <iostream>
 
using namespace std;
 
bool cards[52];
 
int Pos(char a)
{
    if(a == 'S')
        return 0;
    if(a == 'H')
        return 1;
    if(a == 'C')
        return 2;
    if(a == 'D')
        return 3;
}
char Suit(int i)
{
    if(i/13 == 0)
        return 'S';
    if(i/13 == 1)
        return 'H';
    if(i/13 == 2)
        return 'C';
    if(i/13 == 3)
        return 'D';
}
 
int main()
{
    int cant;
    cin >> cant;
    while(cant--)
    {
        char suit;
        int num;
        cin >> suit >> num;
        cards[Pos(suit)*13 + num - 1] = true;
    }
    for(int i = 0; i < 52; ++i)
    {
        if(!cards[i])
            cout << Suit(i) << " " << (i % 13) + 1 << endl;
    }
    return 0;
}
