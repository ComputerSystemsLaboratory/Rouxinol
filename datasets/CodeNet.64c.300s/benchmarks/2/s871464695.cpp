#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int m, f, r, sum;
    while(1)
    {
        cin >> m >> f >> r;
        sum = m + f;
        if ((m==-1)&(f==-1)&(r==-1))
        {
            return 0;
        }
        else if (m*f<0)
        {
            cout<<"F"<<endl;
        }
        else
        {
            if(sum>=80)
                cout<<"A"<<endl;
            else if(sum>=65)
                cout<<"B"<<endl;
            else if(sum>=50)
                cout<<"C"<<endl;
            else if(sum>=30)
            {
                if(r>=50)
                    cout<<"C"<<endl;
                else
                    cout<<"D"<<endl;
            }
            else
                cout<<"F"<<endl;   
        }
    }
    return 0;
}
