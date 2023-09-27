#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    string t_cade,h_cade;
    int t_point=0,h_point=0;
    cin >>n;

    for(int i=0;i<n;i++)
    {
        cin>>t_cade>>h_cade;

        if(t_cade==h_cade)
        {
            t_point++;
            h_point++;
        }else
        {
            int index=0;
            while (t_cade[index] == h_cade[index])
            {
                index++;
            }

            if(t_cade[index] > h_cade[index])
            {
                t_point+= 3;
            }else
            {
                h_point += 3;
            }
        }
    }

    cout<<t_point<<" "<< h_point<<endl;

    return 0;
}