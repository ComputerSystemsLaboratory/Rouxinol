#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=0;
    for(int i=a;i<b+1;i++){
    if(c%i==0){d+=1;}
    else {d+=0;}
    }
    cout<<d<<endl;
    return 0;

}

