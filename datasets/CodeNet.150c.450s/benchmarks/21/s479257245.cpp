#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

//Nayeem Shahriar Joy,Applied Physics And Electronic Engineering,University of Rajshahi.


long int power(int x,int y)

{
    int temp;

    if(y==0)

    {
        return 1;
    }

    temp=power(x,y/2);

    if(y%2==0)

    {
        return temp*temp;
    }

    else

    {
        return x*temp*temp;
    }
}

int main(void)

{
    int n;
    cin>>n;
    cout<<power(n,3)<<endl;
    return 0;
}