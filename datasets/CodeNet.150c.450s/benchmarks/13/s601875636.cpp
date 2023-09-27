#include <iostream>
#include<cstdio>
#include<cctype>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{   string s;
    cin>>s;
    string p;
    cin>>p;
    string c=s+s;
    if (c.find(p)!=string::npos){
        cout<< "Yes"<<endl;
    }else{
         cout<<"No"<<endl;
    }
return 0;
}
