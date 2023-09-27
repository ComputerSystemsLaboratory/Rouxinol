//Bismillahir Rahmanir Rahim
//sajeedreefy
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,count=0,a=0,b=0,c=0,d=0;
    cin >> n;
    string st;
    while(n--)
    {
        cin >> st;
        if(st=="AC")
        {
            a++;
        }
        else if(st=="WA")
        {
            b++;
        }
        else if(st=="TLE")
        {
            c++;
        }
        else if(st=="RE")
        {
            d++;
        }
    }
    cout << "AC x " << a << endl;
    cout << "WA x " << b << endl;
    cout << "TLE x " << c << endl;
    cout << "RE x " << d << endl;

    return 0;

}

