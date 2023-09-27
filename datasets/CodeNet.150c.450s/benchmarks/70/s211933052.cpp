#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int m,d,r;

    while (1)
    {
        cin>>m>>d;
        if (m==0 || d==0)
            break;
        else
        {
            if (m==1)
                r=d;
            else if (m==2)
                r=31+d;
            else if (m==3)
                r=31+29+d;
            else if (m==4)
                r=31+29+31+d;
            else if (m==5)
                r=31+29+31+30+d;
            else if (m==6)
                r=31+29+31+30+31+d;
            else if (m==7)
                r=31+29+31+30+31+30+d;
            else if (m==8)
                r=31+29+31+30+31+30+31+d;
            else if (m==9)
                r=31+29+31+30+31+30+31+31+d;
            else if (m==10)
                r=31+29+31+30+31+30+31+31+30+d;
            else if (m==11)
                r=31+29+31+30+31+30+31+31+30+31+d;
            else if (m==12)
                r=31+29+31+30+31+30+31+31+30+31+30+d;
        }
        if (r%7==1)
            cout<<"Thursday"<<endl;
        else if (r%7==2)
            cout<<"Friday"<<endl;
        else if (r%7==3)
            cout<<"Saturday"<<endl;
        else if (r%7==4)
            cout<<"Sunday"<<endl;
        else if (r%7==5)
            cout<<"Monday"<<endl;
        else if (r%7==6)
            cout<<"Tuesday"<<endl;
        else if (r%7==0)
            cout<<"Wednesday"<<endl;
    }
}
