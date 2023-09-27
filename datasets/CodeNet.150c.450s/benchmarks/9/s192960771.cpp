#include<iostream>
#include<string>

using namespace std;

int main()
{
    string deck;   
    cin>>deck;

    while (deck != "-")
    {
        int m,h;
        cin>>m;

        for(int i=0;i<m;i++)
        {
            cin>>h;

            string temp = deck + deck;

            for(int j= 0;j<deck.length();j++)
            {
                deck[j] = temp[j+h];
            }
        }

        cout<<deck<<endl;

        cin>>deck;
    }

    return 0;
}