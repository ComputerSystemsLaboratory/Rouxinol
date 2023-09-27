#include <iostream>
#include <string>

using namespace std;

class DICE
{
public:
    void set_num (int a[])
    {
        for (int i=0; i<6; i++)
        {
            dicenum[i]=a[i];
        }
    }
    void make_move (char c)
    {
        int temp;
        if (c=='N')
        {
            temp=dicenum[4];
            dicenum[4]=dicenum[0];
            dicenum[0]=dicenum[1];
            dicenum[1]=dicenum[5];
            dicenum[5]=temp;
        }
        if (c=='S')
        {
            temp=dicenum[1];
            dicenum[1]=dicenum[0];
            dicenum[0]=dicenum[4];
            dicenum[4]=dicenum[5];
            dicenum[5]=temp;
        }
        if (c=='E')
        {
            temp=dicenum[2];
            dicenum[2]=dicenum[0];
            dicenum[0]=dicenum[3];
            dicenum[3]=dicenum[5];
            dicenum[5]=temp;
        }
        if (c=='W')
        {
            temp=dicenum[3];
            dicenum[3]=dicenum[0];
            dicenum[0]=dicenum[2];
            dicenum[2]=dicenum[5];
            dicenum[5]=temp;
        }
    }
    int get_top ()
    {
        return dicenum[0];
    }
private:
    int dicenum[6];
};

int main()
{
    int a[6];
    string s;
    DICE dice;
    for (int i=0; i<6; i++) cin>>a[i];
    dice.set_num(a);
    cin>>s;
    for (int i=0; i<s.size(); i++) dice.make_move(s[i]);
    cout<<dice.get_top()<<'\n';
    return 0;
}

