#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s1[101],s2[101];

    int n;

    cin>>n;

    int sum1=0;
    int sum2=0;

    while(n--)
    {
        cin>>s1>>s2;
        if(strcmp(s1,s2)>0)
        {
            sum2+=3;
        }else if(strcmp(s1,s2)==0)
        {
            sum1+=1;
            sum2+=1;
        }else
        {
            sum1+=3;
        }
    }

    cout<<sum2<<" "<<sum1<<endl;



    return 0;
}

