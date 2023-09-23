#include <iostream>

using namespace std;
bool TestPythagoras(int a,int b,int c)
{
   if(a*a==b*b+c*c)
    return true;
   else return false;
}

int main()
{
    int x,y,z;
    int test;
    cin>>test;
    for(int loop=0;loop<test;loop++)
    {
        cin>>x>>y>>z;
        if(TestPythagoras(x,y,z)||TestPythagoras(y,x,z)||TestPythagoras(z,x,y))
            cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
}