#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,a=0,b=0,c=0,d=0;
    cin>>N;
    string S[N];
    for(int i=0;i<N;i++)
    {
        cin>>S[i];

    }

     for(int i=0;i<N;i++)
    {
        if(S[i]=="AC")        {
            a++;
        }
        else if(S[i]=="WA")
        {
            b++;
        }
        else if(S[i]=="TLE")
        {
            c++;
        }
        else if(S[i]=="RE")
        {
            d++;
        }

    }


    cout<<"AC x"<<" "<<a<<endl;
    cout<<"WA x"<<" "<<b<<endl;
    cout<<"TLE x"<<" "<<c<<endl;
    cout<<"RE x"<<" "<<d<<endl;
    return 0;
}
