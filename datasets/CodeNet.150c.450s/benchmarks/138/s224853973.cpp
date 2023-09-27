#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

//Nayeem Shahriar Joy,Applied Physics And Electronic Engineering,University of Rajshahi.
int gcd(long int b,long int a)
{
    if(a<b)

    {
        swap(a,b);
    }

    int c=0;

    while(b>0)

    {
        c=a%b;
        a=b;
        b=c;
    }

    return a;
}

int main(){

 long int a,b;
 cin>>a>>b;
 cout<<gcd(a,b)<<endl;

}