
#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    int n;
    cin>>n;
    string x;
    string y;
    
    int a=0;
    int b=0;

    while(cin>>x){
    cin >>y;
 
    if(y==x) {
      a+=1;
      b+=1;}
    else if(y>x)
    {b+=3;}
    else if(y<x)
    {a+=3;}
    }
cout<<a<<" "<<b<<endl;


    return 0;
}
