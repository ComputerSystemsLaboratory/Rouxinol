#include<iostream>
using namespace std;
bool Eratosthenes[999999+30];

int main()
{
    int n,pos;
    int c;

    while(cin>>n)
    {
        c=0;
        Eratosthenes[1]=false;

        for(int i=2; i<=n; i++) Eratosthenes[i]=true;
        for(int i=2; i<=n; i++)
        {
            if(Eratosthenes[i]==true)
            {
                pos=2*i;
                while(pos<=n)
                {
                    Eratosthenes[pos]=false;
                    pos=pos+i;
                }
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(Eratosthenes[i]==true)
                c++;
        }
        cout<<c<<endl;

    }
    return 0;
}