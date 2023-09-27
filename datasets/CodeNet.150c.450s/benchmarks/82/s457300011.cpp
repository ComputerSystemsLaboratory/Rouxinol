#include <iostream>

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
    int get_front ()
    {
        return dicenum[1];
    }
    int get_right ()
    {
        return dicenum[2];
    }
private:
    int dicenum[6];
};

int main()
{
    DICE dice;
    int a[6], q, b, c;
    for (int i=0; i<6; i++) cin>>a[i];
    dice.set_num(a);
    cin>>q;
    for (int i=0; i<q; i++)
    {
        cin>>b>>c;
        for (int j=0; j<4; j++)
        {
            for (int k=0; k<4; k++)
            {
                for (int l=0; l<4; l++)
                {
                    for (int m=0; m<4; m++)
                    {
                        for (int n=0; n<=j; n++) dice.make_move('N');
                        for (int n=0; n<=k; n++) dice.make_move('S');
                        for (int n=0; n<=l; n++) dice.make_move('E');
                        for (int n=0; n<=m; n++) dice.make_move('W');
                        if (dice.get_top()==b && dice.get_front()==c)
                        {
                            cout<<dice.get_right()<<'\n';
                            j=4; k=4; l=4; m=4;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

