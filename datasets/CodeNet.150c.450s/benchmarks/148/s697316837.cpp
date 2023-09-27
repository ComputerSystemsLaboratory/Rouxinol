#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    string cad;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<N;i++){
        cin>>cad;
        if(cad=="AC")
            a=a+1;
        if(cad=="WA")
            b=b+1;
        if(cad=="TLE")
            c=c+1;
        if(cad=="RE")
            d=d+1;
    }
    cout<<"AC x "<<a<<endl;
    cout<<"WA x "<<b<<endl;
    cout<<"TLE x "<<c<<endl;
    cout<<"RE x "<<d<<endl;
}
