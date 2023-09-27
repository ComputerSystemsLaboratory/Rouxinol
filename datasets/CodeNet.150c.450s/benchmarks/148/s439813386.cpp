#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    string a;
    int ansac=0,answa=0,anstle=0,ansre=0;
    while(n>0)
    {
        cin>>a;
        if(a=="AC")
            ansac++;
        if(a=="WA")
            answa++;
        if(a=="TLE")
            anstle++;
        if(a=="RE")
            ansre++;
        n--;
    }
    cout<<"AC"<<" "<<"x"<<" "<<ansac<<endl;
    cout<<"WA"<<" "<<"x"<<" "<<answa<<endl;
    cout<<"TLE"<<" "<<"x"<<" "<<anstle<<endl;
    cout<<"RE"<<" "<<"x"<<" "<<ansre<<endl;
    return 0;
}
