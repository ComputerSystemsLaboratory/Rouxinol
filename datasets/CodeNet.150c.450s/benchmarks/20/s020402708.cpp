// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a;cin>>a;
    int h=a/3600;
    int m=(a-h*3600)/60;
    int s=a-3600*h-60*m;
    cout<<h<<":"<<m<<":"<<s<<endl;
   
}


