#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,Co=0,C1=0,C2=0,C3=0;
    string n;
    cin>>j;
    for(i=1; i<=j; i++)
    {
        cin>>n;
        if(n=="AC")
            Co++;
        else if(n=="WA")
            C1++;
        else if(n=="TLE")
            C2++;
        else if(n=="RE")
            C3++;
    }
    cout<<"AC x "<<Co<<endl;
    cout<<"WA x "<<C1<<endl;
    cout<<"TLE x "<<C2<<endl;
    cout<<"RE x "<<C3<<endl;
    return 0;
}

