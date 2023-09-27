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
}Dice;


int main()
{
    int a[7];
    Dice d;

    for(int i=0;i<6;i++)
    {
        cin>>a[i+1];
    }

    string s;

    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        d.roll(s[i]);
    }

    cout<<a[d.top]<<endl;

    return 0;

}

