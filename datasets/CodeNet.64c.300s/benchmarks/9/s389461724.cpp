#include<iostream>

using namespace std;
int Weeks;
int Debt = 100000;
int Interest;

int Rounded (int x)
{
    int Remain,y;
    if(x%1000!=0)
    {
        Remain = x%1000;
        y = x-Remain;
        y = y+1000;
        return y;
    }
    else
    {
        return x;
    }

}
int main()
{
    cin >> Weeks;
    for(int z = 0; z < Weeks; z++)
    {
        Interest = Debt * 1.05;
        Interest = Rounded(Interest);
        Debt = Interest;


    }


    cout << Interest << endl;
}