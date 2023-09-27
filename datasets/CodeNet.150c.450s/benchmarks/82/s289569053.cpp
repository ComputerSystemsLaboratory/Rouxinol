#include<iostream>

using namespace std;

typedef struct Dice
{
    int top,front,right;
    Dice()
    {
        top=1;
        front=2;
        right=3;
    }
    void roll(char ch)
    {
        int temp=top;
        switch(ch)
        {
        case 'E':
            top=7-right;
            right=temp;
            break;
        case 'W':
            top=right;
            right=7-temp;
            break;
        case 'N':
            top=front;
            front=7-temp;
            break;
        case 'S':
            top=7-front;
            front=temp;
        }
    }
    void roll1(char ch)
    {
        int temp=front;
        switch(ch)
        {
        case 'r':
            front=7-right;
            right=temp;
            break;
        case 'l':
            front=right;
            right=7-temp;
            break;
        }
    }
}Dice;


int main()
{
    int s[7];
    Dice d;

    for(int i=0;i<6;i++)
    {
        cin>>s[i+1];
    }

    int n;

    cin>>n;

    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        for(int i=0;i<3&&s[d.top]!=a;i++)
        {
                d.roll('N');
        }
        for(int i=0;i<3&&s[d.top]!=a;i++)
        {
            d.roll('E');
        }
        for(int i=0;i<3&&(s[d.front]!=b);i++)
        {
            d.roll1('r');
        }
        cout<<s[d.right]<<endl;
    }



    return 0;

}

